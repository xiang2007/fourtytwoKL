CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./includes
RM = rm -f
AR = ar rcs

NAME = ft_display_file
SRC = ft_display_file.c

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

.PHONY: clean fclean all re

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all 