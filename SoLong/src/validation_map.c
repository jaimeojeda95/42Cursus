/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:53:12 by PC                #+#    #+#             */
/*   Updated: 2025/08/12 22:37:02 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	validation_map(char **map)
{
	int		i;
	size_t	columns;

	if (!map)
		return (1);
	i = 0;
	columns = ft_strlen(map[i++]);
	while (map[i])
	{
		if (ft_strlen(map[i]) != columns)
		{
			printf ("%d\n", i);
			return 0;
		}
		i++;
	}
	return (1);
}
