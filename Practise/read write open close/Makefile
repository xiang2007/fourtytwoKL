CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = a.out
SRCS = test.c
FILE = test.txt

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

.PHONY: all clean re

all:
	$(CC) $(CFLAGS) $(SRCS)
	@./a.out

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(FILE)

re: clean all
	$(CC) $(CFLAGS) $(SRCS)