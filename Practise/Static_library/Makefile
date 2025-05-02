CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./include
AR = ar rcs
RM = rm -f 
SH = sh

SRCS = $(shell find srcs -name "*.c")
OBJ = $(SRCS:.c=.o)
SL = $(shell find -name "*.sh")
NAME = libmath.a
PG = main

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(SH) $(SL)
	
%.o :%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re all
all: $(NAME)
	$(AR) $(NAME) $(OBJ)

$(PG): $(PG).c $(NAME)
	$(CC) $(CFLAGS) $(PG).c -o $(PG) -L. -lmath

run: all $(PG)
	./$(PG)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(PG)

re: fclean all