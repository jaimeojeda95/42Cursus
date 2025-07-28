NAME = push_swap

INCLUDES = -I include -I libft -I.
LIBFT = libft/libft.a

#Aquí debo especificar los archivos .c que quiero compilar
SRC = push_swap.c

#Aquí voy a convertir cada archivo .c en su equivalente .o
#por ejemplo, ft_bzero.c será ft_bzero.o.
OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -Ilibft

#Regla para generar una biblioteca estática
all: $(NAME)

#Aqui creo que mi libreria (.a)
$(NAME): $(OBJ)
	make -C libft
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

#Esto es una regla génerica para compilar de .c a .o
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

#Aquí borra los archivos .o,
# $(OBJ_BONUS)
clean:
	rm -f $(OBJ)
	make -C libft clean

#Esta regla es para borrar los archivos .o y .a (libft)
fclean: clean
	rm -f $(NAME)
	make -C libft fclean

#Esta regla es para limpiar todo y volver a compilar desde cero
re: fclean all

.PHONY: all clean fclean re
