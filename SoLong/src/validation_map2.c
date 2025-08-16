/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_map2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:49:09 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/16 21:18:47 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Copio el mapa para poder hacer flood fill
char **ft_copy_map(t_game *game)
{
	int		i;
	char	**map_copy;
	
	map_copy = malloc(sizeof(char *) * game->rows + 1);
	i = 0;
	while (i < game->rows)
	{
		map_copy[i] = ft_strdup(game->map[i]);
		i++;
	}
	map_copy[i] =  NULL;
	return (map_copy);
}

// Encuentro la posición del jugador
void ft_find_player(t_game *game)
{
	int		x;
	int		y;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'P')
			{
				game->start_y = y;
				game->start_x = x;
				return ;
			}
			x++;
		}	
		y++;
	}
}

// Verifico las salidaas y coleccionables sean accesibles
void ft_flood_fill(char** map_copy, t_game *game, int x, int y)
{
	if ((x < 0 || y < 0) || (x >= game->columns ||  y >= game->rows))
		return ;
	else if (map_copy[y][x] == '1' || map_copy[y][x] == 'V')
		return ;
	map_copy[y][x] = 'V';
	ft_flood_fill(map_copy, game, x + 1, y);
	ft_flood_fill(map_copy, game, x - 1, y);
	ft_flood_fill(map_copy, game, x, y + 1);
	ft_flood_fill(map_copy, game, x, y - 1);
}

// Verifico que las salidas y los coleccionables fueron alcanzados
int	ft_map_playable(char **map_copy)
{
	int		x;
	int		y;

	y = 0;
	while (map_copy[y])
	{
		x = 0;
		while (map_copy[y][x])
		{
			if (map_copy[y][x] == 'C' || map_copy[y][x] == 'E')
				return (ft_printf("Error: Hay salidas u objetos sin alcanzar\n"), 0);
			x++;
		}
		y++;
	}
	return (1);
}

// Valido todo el mapa en una sola función
int	ft_validate_map_playable(t_game *game)
{
	char	**map_copy;

	map_copy = ft_copy_map(game);
	if (!map_copy)
		return (0);
	ft_find_player(game);
	ft_flood_fill(map_copy, game, game->start_x, game->start_y);	
	if(!ft_map_playable(map_copy))
	{
		ft_printf("El mapa no es jugable\n");
		return (0);
	}
	return (1);
}
