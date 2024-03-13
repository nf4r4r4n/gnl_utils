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

.PHONY: all fclean clean re
