CC = gcc
CFLAGS = -Wall -Werror -Wextra -fsanitize=undefined
RM = rm -f

NAME = program
SRC = $(shell find -name "*.c")

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

.PHONY: all clean fclean re

clean:
	$(RM) $(NAME)

fclean: clean

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

re: fclean all