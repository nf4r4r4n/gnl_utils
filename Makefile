NAME=get_next_line.a
SRC=get_next_line.c \
	get_next_line_utils.c
OBJS=${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar -r $@ $?

%.o: %.c
	cc -Wall -Wextra -Werror -c $?

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

run:
	make all
	make clean
	cc -Wall -Wextra -Werror test.c memory/memory.a get_next_line.a -o test.out
	valgrind --track-origins=yes --leak-check=full --leak-resolution=high --xtree-leak=yes --quiet ./test.out

.PHONY: all fclean clean re run
