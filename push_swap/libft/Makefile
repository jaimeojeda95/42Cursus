#Primero defino el nombre del programa
#(NAME tambien lo puedo llamar TARGET)

NAME = libft.a

INCLUDE = libft.h
#Aquí debo especificar los archivos .c que quiero compilar
SRC = ft_isalnum.c  ft_isascii.c  ft_isprint.c ft_atol.c\
ft_memcmp.c  ft_memmove.c  ft_strchr.c  ft_strlcat.c  ft_strlen.c \
ft_strnstr.c  ft_tolower.c ft_atoi.c  ft_calloc.c  ft_isalpha.c \
ft_isdigit.c  ft_memchr.c   ft_memcpy.c  ft_memset.c   ft_strdup.c \
ft_strlcpy.c  ft_strncmp.c  ft_strrchr.c  ft_toupper.c ft_substr.c \
ft_strjoin.c ft_itoa.c ft_strmapi.c ft_strtrim.c ft_split.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_bzero.c ft_strcmp.c ft_printf/ft_printf.c \
ft_printf/ft_printf_funtions_2.c ft_printf/ft_printf_funtions_1.c \
get_next_line/get_next_line_bonus.c get_next_line/get_next_line_utils.c \
get_next_line/get_next_line_utils_bonus.c get_next_line/get_next_line.c

#SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
ft_lstiter.c ft_lstmap.c

#Aquí voy a convertir cada archivo .c en su equivalente .o
#por ejemplo, ft_bzero.c será ft_bzero.o.
OBJ = $(SRC:.c=.o)
#OBJ_BONUS = $(SRC_BONUS:.c=.o)

#Aquí defino el compilador (para C es cc)
#CC = cc
CC = cc

#Defino las banderas (flags) del compilador
#CFLAGS = -Wall -Wextra -Werror
CFLAGS = -Wall -Wextra -Werror

#Regla para generar una biblioteca estática
all: $(NAME)

#Aqui creo que mi libreria (.a)
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

#bonus: $(OBJ) $(OBJ_BONUS)
	@ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

#Lo que dice es: Para crear $(NAME), es decir, libft.a, necesito los
#archivos .o que están en $(OBJ). Lo mismo para bonus.

#rcs: Son las banderas que se pasan al comando ar
#r: Reemplaza o agrega archivos a la biblioteca estática.
#c: Crea la biblioteca si no existe.
#s: Crea un índice (o tabla de símbolos) dentro de la biblioteca estática,
#lo que mejora el rendimiento al enlazar la biblioteca en programas más grandes.

#Esto es una regla génerica para compilar de .c a .o
%.o: %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@

#Esto dice --> $(CC) : El compilador (por defecto es cc)
# $(CFLAGS): banderas de compilación (-Wall -Wextra -Werror)
# -c : Compila sin enlazar (genera .o, no ejecutables)
# $< : El archivo fuente .c (ej: ft_bzero.c)
# -o $@ : Dice que la salida debe llamarse como el archivo objetivo (ej: ft_bzero.o)

#Aquí borra los archivos .o,
# $(OBJ_BONUS)
clean:
	@rm -f $(OBJ) 

#Esta regla es para borrar los archivos .o y .a (libft)
fclean: clean
	@rm -f $(NAME)

#Esta regla es para limpiar todo y volver a compilar desde cero
re: fclean all

.PHONY: all clean fclean