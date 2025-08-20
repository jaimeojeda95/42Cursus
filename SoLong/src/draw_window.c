/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:18:26 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/20 22:50:44 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Crea la ventana vacía
void init_window(t_game *game)
{
	game->width = game->columns * TILE;
	game->height = game->rows * TILE;
	game->mlx = mlx_init(game->width, game->height, "SoLong", true);
	if (!game->mlx)
		return ;
}

// Funcion para recibir y convertir las texturas a imagenes
mlx_image_t *ft_load_png(t_game *game, char *file)
{
	mlx_texture_t	*texture;
	mlx_image_t		*image;

	texture = mlx_load_png(file);
	if (!texture)
		return (ft_printf("Error creando %s\n", file), NULL);
	image = mlx_texture_to_image(game->mlx, texture);
	if (!image)
		return (ft_printf("Error creando %s\n", file), NULL);
	free (texture);
	return (image);
}

// Aquí cargo todos los png
void ft_load_all_png(t_game	*game)
{
	game->tx.floor = ft_load_png(game, "textures/tileset.png");
	game->tx.wall = ft_load_png(game, "textures/wall.png");
	game->tx.exit = ft_load_png(game, "textures/exit.png");
	game->tx.collectable = ft_load_png(game, "textures/collectable1.png");
}