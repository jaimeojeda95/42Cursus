# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/05 21:01:13 by jaojeda-          #+#    #+#              #
#    Updated: 2025/08/25 18:12:35 by jaojeda-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Primero defino el nombre del programa
#(NAME tambien lo puedo llamar TARGET)

NAME = so_long

INCLUDES = -I include -I libft -I MLX42/include

SRC = src/so_long.c src/create_map.c src/validation_map1.c \
src/validation_map2.c src/draw_window.c src/hooks.c \
src/free_all.c \

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -g
#CFLAGS += -fsanitize=address

LIBFT = libft/libft.a
MLX_LIB = MLX42/build/libmlx42.a
#MLX_FLAGS = -L/opt/homebrew/lib -lglfw -pthread -lm -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -ldl
MLX_FLAGS = -ldl -lglfw -pthread -lm

# --------------------------------------------------------------
# 👇 Regla principal
# --------------------------------------------------------------

#Regla para generar una biblioteca estática
all: $(NAME)

#Aqui creo que mi libreria (.a)
$(NAME): $(OBJ)
	@$(MAKE) -C libft > /dev/null
	@$(MAKE) libmlx
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) $(LIBFT) $(MLX_LIB) $(MLX_FLAGS) -o $(NAME)
	@echo "✅ Proyecto compilado correctamente."

# --------------------------------------------------------------
# 🛠 Compilar cada archivo fuente
# --------------------------------------------------------------

#Esto es una regla génerica para compilar de .c a .o
%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ > /dev/null
	@echo "🔧 Compilado: $<"

# --------------------------------------------------------------
# 📦 Compilación de MLX42
# --------------------------------------------------------------

libmlx:
	@cmake -B MLX42/build MLX42 > /dev/null
	@make -C MLX42/build -j4 > /dev/null
	@echo "📦 MLX42 compilada."

# --------------------------------------------------------------
# 🧹 Limpieza
# --------------------------------------------------------------

#Aquí borra los archivos .o,
clean:
	@rm -f $(OBJ)
	@$(MAKE) -C libft clean > /dev/null
	-@$(MAKE) -C MLX42/build clean > /dev/null 2>&1 || true
	@echo "🧹 Archivos objeto y temporales eliminados."

#Esta regla es para borrar los archivos .o y .a (libft)
fclean: clean
	@rm -f $(NAME)
	@rm -f MLX42/build/libmlx42.a
	@rm -rf MLX42/build
	@$(MAKE) -C libft fclean > /dev/null
	@echo "🧼 Todo limpio: binarios, libft y MLX42."

#Esta regla es para limpiar todo y volver a compilar desde cero
re: fclean all

.PHONY: all clean fclean
