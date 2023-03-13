##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	./src/main.c	\
		./src/destroy_things.c	\
		./src/init_useful.c	\
		./src/sprite/load_sprite.c	\
		./src/move_image.c	\
		./src/event_type.c	\
		./src/sprite/get_time.c	\
		./src/sprite/change_positions.c	\
		./src/sprite/at_edge.c	\
		./src/sprite/set_scale.c	\
		./src/mouse_pos.c	\
		./src/text/init_text.c	\
		./src/text/set_pos_txt.c	\
		./src/text/init_life.c	\
		./src/count_life.c	\
		./src/int_to_char_star.c	\
		./src/int_len.c	\
		./src/func.c

OBJ	=	$(SRC:.c=.o)

REM	=	*.gcno	\
		*.gcda

CC	=	@gcc

LIB	=	-lcsfml-audio -lcsfml-window -lcsfml-system -lcsfml-graphics

CFLAGS	=	 -Wall -Wextra -g

CPPFLAGS	=	-I./include

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all clean

.PHONY: fclean all clean re
