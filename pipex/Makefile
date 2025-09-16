# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: PC <PC@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/10 19:39:11 by PC                #+#    #+#              #
#    Updated: 2025/09/16 21:28:07 by PC               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Defino el nombre del programa
NAME = pipex

INCLUDES = -I include -I libft

SRC = src/pipex.c src/pipex_functions.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -g
#CFLAGS += -fsanitize=address

LIBFT = libft/libft.a

# --------------------------------------------------------------
# 👇 Regla principal
# --------------------------------------------------------------

#Regla para generar una biblioteca estática
all: $(NAME)

#Aquí creo mi libreria (.a)
$(NAME): $(OBJ)
	@$(MAKE) -C libft > /dev/null
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "✅ Proyecto compilado correctamente."

# --------------------------------------------------------------
# 🛠 Compilar cada archivo fuente
# --------------------------------------------------------------

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ > /dev/null
	@echo "🔧 Compilado: $<"

# --------------------------------------------------------------
# 🧹 Limpieza
# --------------------------------------------------------------

#Borro los archivos .o
clean:
	@rm -f $(OBJ)
	@$(MAKE) -C libft clean > /dev/null
	@echo "🧹 Archivos objeto y temporales eliminados."

#Borro los .o y el .a
fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C libft fclean > /dev/null
	@echo "🧼 Todo limpio: binarios y libft"

#Para limpiar todo volver a compilar desde cero
re: fclean all

.PHONY: all clean fclean