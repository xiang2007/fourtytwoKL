CC = gcc
CFLAGS = -Wall -Werror -Wextra
FSAN = -fsanitize=undefined
RM = rm -f

NAME = program
TEST = test.c
SRC = $(shell find -name "*.c")

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(FSAN) $(SRC) -o $(NAME)

.PHONY: clean fclean all re

clean:
	$(RM) $(NAME)

fclean: clean

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

re: fclean all