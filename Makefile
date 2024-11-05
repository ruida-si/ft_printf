SOURCES = main.c ft_putstr.c ft_printf.c ft_putnbr.c

FLAGS = -Wall -Wextra -Werror

OBJ = $(SOURCES:.c=.o)

CC = cc

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

ap:
	$(CC) $(FLAGS) $(SOURCES)
	./a.out

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all