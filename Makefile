NAME = rush-02
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
SRC = src/main.c src/utils.c src/number_to_words.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
