##
## EPITECH PROJECT, 2019
## d
## File description:
## d
##

SRC	=	$(wildcard src/*.c) $(wildcard src/lib/my/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		rush3 clean all fclean re