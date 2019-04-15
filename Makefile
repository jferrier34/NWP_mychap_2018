##
## EPITECH PROJECT, 2019
## NWP_mychap_2018
## File description:
## Makefile
##

all	:	$(NAME)

.PHONY : all

NAME	=	client


CFLAGS	=	-Wall -Wextra -pedantic

SRC	=	./src/main.c	\

OBJ	=	$(SRC:.c=.o)


$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(CFLAGS) $(OBJ)

all	:	$(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	: fclean all