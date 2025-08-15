/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:53:12 by PC                #+#    #+#             */
/*   Updated: 2025/08/15 22:09:45 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Compruebo que no hayan personajes (P) o salidas (E) duplicadas
int	validation_duplicates(t_game *game)
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
int	validation_walls(t_game *game)
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
int	validation_columns_chars(t_game *game)
{
	int		i;
	int		j;

	if (!game->map)
		return (1);
	game->columns = ft_strlen(game->map[0]);
	i = 0;
	while (game->map[i])
	{
		if (ft_strlen(game->map[i]) != game->columns)
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
