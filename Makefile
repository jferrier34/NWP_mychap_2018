##
## EPITECH PROJECT, 2018
## mychap
## File description:
## makefile
##

SRC	=	./src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	client

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra -I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $@ $(SRC) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean re all client