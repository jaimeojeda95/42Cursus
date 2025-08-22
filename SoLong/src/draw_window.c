/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:18:26 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/22 20:51:56 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Aqui pinto al jugador (es dinámico)
void	ft_draw_player(t_game *game)
{
	int		y;
	int		x;
	
	y = 0;
	while (y < game->rows)
	{
		x = 0;
		while (x < game->columns)
		{
			if (game->map[y][x] == 'P')
			{
				mlx_image_to_window(game->mlx, game->tx.player,
					(x * TILE), (y * TILE));
				game->player_y = y;
				game->player_x = x;
				game->player_image = game->tx.player;
			}
			x++;
		}
		y++;
	}
}

// Aqui voy a "pintar" la ventana (todo lo estático)
void	ft_draw_map(t_game *game, int x, int y)
{
	game->total_collectable = 0;
	while (y < game->rows)
	{
		x = 0;
		while (x < game->columns)
		{
			mlx_image_to_window(game->mlx, game->tx.floor,
				(x * TILE), (y * TILE));
			if (game->map[y][x] == '1')
				mlx_image_to_window(game->mlx, game->tx.wall,
					(x * TILE), (y * TILE));
			else if (game->map[y][x] == 'C')
			{
				mlx_image_to_window(game->mlx, game->tx.collectable,
					(x * TILE), (y * TILE));
				game->total_collectable++;
			}		
			else if (game->map[y][x] == 'E')
				mlx_image_to_window(game->mlx, game->tx.exit,
					(x * TILE), (y * TILE));
			x++;
		}
		y++;
	}
}

// Funcion para recibir y convertir las texturas a imagenes
mlx_image_t	*ft_load_png(t_game *game, char *file)
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
void	ft_load_all_png(t_game	*game)
{
	game->tx.floor = ft_load_png(game, "textures/floor.png");
	game->tx.wall = ft_load_png(game, "textures/wall.png");
	game->tx.exit = ft_load_png(game, "textures/exit1.png");
	game->tx.collectable = ft_load_png(game, "textures/collectable1.png");
	game->tx.player = ft_load_png(game, "textures/player.png");
	ft_draw_map(game, 0, 0);
	ft_draw_player(game);
}

// Crea la ventana vacía
void	init_window(t_game *game)
{
	game->width = game->columns * TILE;
	game->height = game->rows * TILE;
	game->mlx = mlx_init(game->width, game->height, "SoLong", true);
	if (!game->mlx)
		return ;
}
