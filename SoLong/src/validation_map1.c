/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_map1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:53:12 by PC                #+#    #+#             */
/*   Updated: 2025/08/16 21:08:47 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Compruebo que no hayan personajes (P) o salidas (E) duplicadas
int	ft_validation_duplicates(t_game *game)
{
	int		i;
	int		j;
	int		countP;
	int		countE;

	i = 0;
	countP = 0;
	countE = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == 'P')
				countP++;
			if (game->map[i][j] == 'E')
				countE++;
			j++;
		}
		i++;
	}
	if (countP != 1 || countE != 1)
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

int ft_validate_map(t_game *game)
{
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
