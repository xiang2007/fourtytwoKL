CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./include
AR = ar rcs
RM = rm -f

SRC = $(shell find srcs ~/c/c09/ex01/scrs -name "*.c")
OBJ = $(SRC:.c=.o)
NAME = libft.a
all = $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re all
clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

all: $(NAME)
	$(AR) $(NAME) $(OBJ)

re: fclean all