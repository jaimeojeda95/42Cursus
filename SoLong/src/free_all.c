/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 20:04:00 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/27 23:50:49 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_clean_exit(t_game *game, int code)
{
	if (game->map)
		ft_free_split(game->map);
	if (game->mlx)
	{
		mlx_close_window(game->mlx);
		mlx_terminate(game->mlx);
	}
	exit(code);
}

void	ft_disable_collect_at(t_game *game, int x, int y)
{
	size_t	i;

	i = 0;
	while (i < (game->tx.collectable->count))
	{
		if (((game->tx.collectable->instances[i].x) == (x * TILE))
			&& ((game->tx.collectable->instances[i].y) == (y * TILE)))
		{
			game->tx.collectable->instances[i].enabled = false;
			return ;
		}
		i++;
	}
}

int	ft_check_collectable(t_game *game)
{
	int		i;
	int		j;

	i = 0;
	game->count_c = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == 'C')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
