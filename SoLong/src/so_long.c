/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:26:27 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/22 21:10:33 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		return (ft_printf("Error: Número de argumentos\n"), 1);
	if (!check_ber(argv[1]))
		return (ft_printf("Error: No es un archivo .ber"), 1);
	if (!create_map(&game, argv[1]))
		return (ft_printf("Error creando el mapa\n"), 1);
	game.moves = 0;
	game.point = 0;
	if (!ft_validate_map(&game))
		return (1);
	init_window(&game);
	ft_load_all_png(&game);
	mlx_key_hook(game.mlx, ft_key_hooks, &game);
	mlx_close_hook(game.mlx, ft_close_window, &game);
	mlx_loop(game.mlx);
	return (0);
}
