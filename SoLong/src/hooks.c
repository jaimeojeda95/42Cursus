/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 21:03:30 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/22 20:59:18 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Cierro la ventana
void	ft_close_window(void *param)
{
	t_game	*game;

	game = (t_game *)param;
	ft_clean_exit(game, 0);
}

// Aquí activo los movimientos
void	ft_key_hooks(mlx_key_data_t keydata, void *param)
{
	t_game	*game;
	
	game = (t_game *)param;
	if (keydata.action != MLX_PRESS)
    	return;
	if (keydata.key == MLX_KEY_ESCAPE)
		ft_clean_exit(game, 0);
	if (keydata.key == MLX_KEY_W || keydata.key == MLX_KEY_UP)
		ft_move_player(game, game->player_y - 1, game->player_x);
	else if (keydata.key == MLX_KEY_D || keydata.key == MLX_KEY_RIGHT)
		ft_move_player(game, game->player_y, game->player_x + 1);
	else if (keydata.key == MLX_KEY_A || keydata.key == MLX_KEY_LEFT)
		ft_move_player(game, game->player_y, game->player_x - 1);
	else if (keydata.key == MLX_KEY_S || keydata.key == MLX_KEY_DOWN)
		ft_move_player(game, game->player_y + 1, game->player_x);
}

// Aquí indico como serán los movimientos
void	ft_move_player(t_game *game, int new_y, int new_x)
{
	if (game->map[new_y][new_x] == '1')
		return ;
	if (game->map[new_y][new_x] == 'C')
	{
		game->map[new_y][new_x] = '0';
		ft_disable_collect_at(game, new_x, new_y);
		game->point++;
	}
	game->player_y = new_y;
	game->player_x = new_x;
	game->tx.player->instances[0].x = new_x * TILE;
	game->tx.player->instances[0].y = new_y * TILE;
	game->moves++;
	ft_printf("Movimientos: %d\n", game->moves);
	if (game->map[new_y][new_x] == 'E'
		&& game->point == game->total_collectable)
	{
		ft_printf ("WINNER!");
		ft_clean_exit(game, 0);
	}
}
