NAME=memory.a
SRC=memory.c
OBJS=${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar -r $@ $?

%.o: %.c
	cc -Wall -Wextra -Werror -c $?

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
