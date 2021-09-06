##
## EPITECH PROJECT, 2019
## ds
## File description:
## d
##

SRC =	do-op.c \
	my_getnbr.c \
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_strcmp.c \
	my_strlen.c

OBJ =	$(SRC:.c=.o)

NAME = do-op

all : $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean : rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
