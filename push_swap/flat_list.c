/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flat_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:00:15 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/30 21:00:33 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Llevo args a una lista plana (char **)
char	**flat_list1(char ***args)
{
	int		i;
	int		j;
	int		n;
	char	**flat_args;
	
	i = 0;
	n = 0;
	if (!args)
		return (NULL);
	while (args[i] != NULL)
	{
		j = 0;
		while (args[i][j] != NULL)
		{
			j++;
			n++;
		}
		i++;
	}
	flat_args = flat_list2(args, n);
	return (flat_args);
}

char	**flat_list2(char ***args, int n)
{
	char	**flat_args;
	int		i;
	int		j;
	int		k;
	
	flat_args = malloc(sizeof(char *) * (n + 1));
	if (flat_args == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (args[i] != NULL)
	{
		j = 0;
		while(args[i][j] != NULL)
		{
			flat_args[k] = args[i][j];
			j++;
			k++;
		}
		i++;
	}
	flat_args[k] = NULL;
	return (flat_args);
}