##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## for evalexpr
##

SRC	=	$(wildcard src/*.c) $(wildcard src/lib/my/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	eval_expr all clean fclean re
