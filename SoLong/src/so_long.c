/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:26:27 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/12 21:31:54 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int main(int argc, char **argv)
{
	int i;
	char **map;

	i = 0;
	if (argc != 2)
		return (ft_printf("Error: Debes enviar un -solo- "
						  "mapa como argumento\n"),
				1);
	if (!check_ber(argv[1]))
		return (ft_printf("Error: No es un archivo .ber"), 1);
	map = create_map(argv[1], 0);
	if (!map)
		return (ft_printf("Error creando el mapa\n"), 1);
	while (map[i])
	{
		printf("map[%d]: %s\n", i, map[i]);
		i++;
	}
	return (0);
}
