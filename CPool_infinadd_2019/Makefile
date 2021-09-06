##
## EPITECH PROJECT, 2019
## s
## File description:
## s
##

SRC	=	$(wildcard ./src/*.c) \
		$(wildcard ./src/lib/my/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	infin_add

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean \
		all

.PHONY:		infinadd \
		clean \
		all \
		fclean \
		re
