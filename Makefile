NAME = ./fillit

CC = gcc

FLAGS = -Wall -Wextra -Werror

PLIB = ./libft\

LIB = ./libft/libft.a

SRC = checkbuf.c\
		main.c\
		fillit.h\
		ft_strcmp_f.c\
		putref.c\
		ft_lstaddback.c\
		ft_minos.c\

OBJ = $(SRC:.c=.o)

TEST :
		@(cd $(PLIB) && $(MAKE))
		$(CC) $(FLAGS) $(LIB) $(SRC)
		mv ./a.out $(NAME)

all : TEST

clean :
		rm -rf $(NAME)
		rm -rf fillit.h.gch

fclean : clean
		@(cd $(PLIB) && $(MAKE) $@)
