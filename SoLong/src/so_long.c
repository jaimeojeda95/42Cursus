/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:26:27 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/15 19:04:08 by PC               ###   ########.fr       */
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
		return (ft_printf("Error creando el mapa\n"), 1);
	if (!validation_columns_chars(&game))
		return (printf("Mapa no válido\n"), 1);
	if (!validation_walls(&game))
		return (printf("Error\n"), 1);
	while (i < game.rows)
	{
		printf("map[%d]: %s\n", i, game.map[i]);
		i++;
	}
	return (0);
}
