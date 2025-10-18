# Makefile

NAME = morpion

SRCS = main.c \
	inittab.c \
	printtab.c \
	endgame.c \
	win.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all