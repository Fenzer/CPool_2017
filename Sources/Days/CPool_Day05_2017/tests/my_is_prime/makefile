##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Test with Criterion lib makefile
##

SRC_DIR=	$(realpath ../..)

# Must list all project files without the main() function
# Criterion uses its own main() ;
# having a main() in any .c file will have the build fail

SRC=		$(SRC_DIR)/my_is_prime.c

SRC_UT_DIR= 	$(realpath .)

# Must list all files containing unit tests

SRC_UT=		$(SRC_UT_DIR)/tests-my_is_prime.c


OBJ= 		$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS= 	-Wall -Wextra --coverage

LDFLAGS= 	-lcriterion -lgcov

NAME= 		Tests

all: 		$(NAME)

$(NAME): 	$(OBJ)

		cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re: 		fclean all
