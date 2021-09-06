##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## for evalexpr
##

SRC	=	$(wildcard src/*.c) $(wildcard src/lib/my/*.c) $(wildcard src_infin_calc/*.c) $(wildcard src/eval_expr/*.c)

OBJ	=	$(SRC:.c=.o)

TESTS	=	$(wildcard tests/*.c) $(wildcard src/lib/my/*.c) $(wildcard src_infin_calc/*.c) $(wildcard src/eval_expr/*.c)

OBJ_TESTS =	$(TESTS:.c=.o)

NAME	=	calc

TEST_NAME =	unit_tests

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -g3 -o $(NAME) $(OBJ)

tests_run:	$(OBJ_TESTS)
		gcc -o $(TEST_NAME) $(OBJ_TESTS) -lcriterion --coverage
		./unit_tests

tclean:
	rm -f $(OBJ_TESTS) $(TEST_NAME)

clean:
	rm -f $(OBJ)

fclean: clean tclean
	rm -f $(NAME)

re:	fclean all

.PHONY:	calc all clean fclean re