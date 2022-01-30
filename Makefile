##
## EPITECH PROJECT, 2018
## Evalexpr
## File description:
## Makefile
##

SRC		=	./source/my_printf.c		\
			./source/display_number.c		\
			./source/convert.c		\
			./source/my_putstr.c		\
			./source/my_putchar.c		\
			./source/my_revstr.c		\
			./source/my_strlen.c		\
			./source/my_strcpy.c		\
			./source/option1.c		\
			./source/option2.c		\
			./source/option3.c

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	 $(NAME) clean

$(NAME):	$(OBJ)
		@ar rc libmy.a ./source/*.o

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re:
		fclean $(NAME)

auteur:
		echo $(USER) > auteur
