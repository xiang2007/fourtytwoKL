CC = gcc
CFLAGS = -Wall -Werror -Wextra -fsanitize=undefined
RM = rm -f

NAME = program
TEST = test.c
TESTFILE = test
SRC = $(shell find srcs -name "*.c")
MAIN = Program.c

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(MAIN) $(SRC) -o $(NAME)

.PHONY: all clean fclean re

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(TESTFILE)

all:
	$(CC) $(CFLAGS) $(MAIN) $(SRC) -o $(NAME)

re: fclean all

test:
	$(CC) $(CFLAGS) $(TEST) -o test