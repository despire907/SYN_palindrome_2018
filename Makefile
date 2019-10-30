##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

CC	= gcc -g

RM	= rm -f

TEST_NAME	= test

NAME	= palindrome

SRC	=   arg/check_arg.c \
		arg/check_enter.c   \
		arg/understand_enter.c  \
		utils/my_revert.c   \
		main.c

TEST_SRC	=   src/arg/check_arg.c \
				src/arg/check_enter.c   \
				src/arg/understand_enter.c  \
				src/utils/my_revert.c   \
				tests/test_fonction_arg.c	\
				tests/test_palindromic.c    \
				tests/test_integer.c    \
				tests/test_coverage.c   \
				tests/test_more_coverage.c   \
				tests/test_more_more_coverage.c \
				tests/test_more_than_more.c

OBJ	= $(addprefix src/,$(SRC:.c=.o))

TEST_OBJ = $(TEST_SRC:.c=.o)

override CFLAGS	+= -W -Wextra -Wall -I include/

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

tests_run: CFLAGS += --coverage
tests_run: $(TEST_OBJ)
	gcc $(TEST_OBJ) -o $(TEST_NAME) --coverage -lcriterion -I include/
	gcovr --exclude tests/
	gcovr -r ./ --html --html-details -o coverage.html --exclude tests/
	./$(TEST_NAME)
	firefox coverage.html

clean:
	$(RM) $(OBJ) $(TEST_OBJ:.o=.gcda) $(TEST_OBJ:.o=.gcno) $(TEST_OBJ:.o=.o)

fclean: clean
	$(RM) $(NAME) $(TEST_NAME) *.html

re:	fclean all

.PHONY: all clean fclean re
