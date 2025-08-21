/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:26:27 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/21 20:53:07 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	int		i;
	t_game	game;

	i = 0;
	if (argc != 2)
		return (ft_printf("Error: Número de argumentos\n"), 1);
	if (!check_ber(argv[1]))
		return (ft_printf("Error: No es un archivo .ber"), 1);
	if (!create_map(&game, argv[1]))
		return (ft_printf("Error creando el mapa\n"), 0);
	if (!ft_validate_map(&game))
		return (1);
	init_window(&game);
	ft_load_all_png(&game);
	mlx_loop(game.mlx);
	
	while (game.map[i])
	{
		printf("map[%d]: %s\n", i, game.map[i]);
		i++;
	}
	return (0);
}
