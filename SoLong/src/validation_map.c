/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:53:12 by PC                #+#    #+#             */
/*   Updated: 2025/08/13 21:34:01 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	validation_columns_chars(char **map)
{
	int		i;
	int		j;
	size_t	columns;

	if (!map)
		return (1);
	i = 0;
	columns = ft_strlen(map[i++]);
	while (map[i])
	{
		if (ft_strlen(map[i]) != columns)
			return (0);
		j = 0;
		while (map[i][j])
		{
			if (!(map[i][j] == '0' || map[i][j] == '1' ||
				map[i][j] == 'C' || map[i][j] == 'E' || map[i][j] == 'P'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
