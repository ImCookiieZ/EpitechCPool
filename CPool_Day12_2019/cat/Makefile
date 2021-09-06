##
## EPITECH PROJECT, 2019
## s
## File description:
## s
##

SRC =	girl.c \
	my_put_nbr.c \
	my_putchar.c \
	my_putstr.c \
	my_strlen.c

OBJ = $(SRC:.c=.o)

NAME = cat

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: cat all clean fclean re
