/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_map1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:53:12 by PC                #+#    #+#             */
/*   Updated: 2025/08/22 21:51:15 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Compruebo las dimensiones del mapa vs el monitor
int	check_map_size(t_game *game)
{
	int		screen_w;
	int		screen_h;

	mlx_get_monitor_size(0, &screen_w, &screen_h);
	if (game->columns * TILE > screen_w
		|| game->rows * TILE > screen_h)
	{
		ft_printf("Error: El mapa es más grande que el monitor\n");
		ft_clean_exit(game, 0);
	}
	return (1);
}

// Compruebo que no hayan personajes (P) o salidas (E) duplicadas
int	ft_validation_duplicates(t_game *game)
{
	int		i;
	int		j;
	int		count_p;
	int		count_e;

	i = 0;
	count_p = 0;
	count_e = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == 'P')
				count_p++;
			if (game->map[i][j] == 'E')
				count_e++;
			j++;
		}
		i++;
	}
	if (count_p != 1 || count_e != 1)
		return (ft_printf("Error: Caracteres duplicados\n"), 0);
	return (1);
}

// Valido que el mapa esté cerrado/rodeado por muros
int	ft_validation_walls(t_game *game)
{
	int		i;
	int		j;

	j = 0;
	while (game->map[0][j])
		if (game->map[0][j++] != '1')
			return (0);
	i = 0;
	while (game->map[i])
		if (game->map[i++][0] != '1')
			return (0);
	j = 0;
	while (game->map[i - 1][j])
		if (game->map[i - 1][j++] != '1')
			return (0);
	i = 0;
	j = game->columns - 1;
	while (game->map[i])
		if (game->map[i++][j] != '1')
			return (0);
	return (1);
}

// Valido las columnas y caracteres
int	ft_validation_columns_chars(t_game *game)
{
	int		i;
	int		j;

	if (!game->map)
		return (1);
	game->columns = ft_strlen(game->map[0]);
	i = 0;
	while (game->map[i])
	{
		if ((int)ft_strlen(game->map[i]) != game->columns)
			return (0);
		j = 0;
		while (game->map[i][j])
		{
			if (!(game->map[i][j] == '0' || game->map[i][j] == '1' ||
				game->map[i][j] == 'C' || game->map[i][j] == 'E' ||
				game->map[i][j] == 'P'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// Valido todo el mapa
int	ft_validate_map(t_game *game)
{
	check_map_size(game);
	if (!ft_validation_columns_chars(game))
		return (printf("Mapa no válido\n"), 0);
	if (!ft_validation_walls(game))
		return (printf("Error\n"), 0);
	if (!ft_validation_duplicates(game))
		return (0);
	if (!ft_validate_map_playable(game))
		return (0);
	return (1);
}
