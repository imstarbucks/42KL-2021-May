NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c99
SRC = main.c

all: $(NAME)

$(NAME):
	@echo "Compilling..."
	$(CC) $(CFLAGS) $(SRC)
	@./a.out | cat -e
	@make clean

clean:
	@echo "Cleaning up..."
	@rm *.out
