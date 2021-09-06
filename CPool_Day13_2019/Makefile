##
## EPITECH PROJECT, 2019
## s
## File description:
## s
##

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = libbtree.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
