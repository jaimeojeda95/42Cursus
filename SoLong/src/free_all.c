/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 20:04:00 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/25 18:04:33 by jaojeda-         ###   ########.fr       */
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
