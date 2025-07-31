/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:18:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/31 16:31:58 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Creo un storage (args) en donde meto todos los argumentos
char	***evaluate_arguments(int argc, char **argv)
{
	char	***args;
	int		i;
	int		j;

	args = malloc(sizeof(char **) * (argc));
	if (args == NULL)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		args[i - 1] = ft_split(argv[i], ' ');
		if (args[i - 1] == NULL)
			return (NULL);
		i++;
	}
	j = 0;
	args[argc - 1] = NULL;
	return (args);
}

int	main(int argc, char **argv)
{
	char	***args;
	char	**flat_args;
	int		i;

	args = evaluate_arguments(argc, argv);
	if (args == NULL)
		return (1);
	if (!validate_args(argc, args))
		return (1);
	if (!validate_int(argc, args))
		return (1);
	flat_args = flat_list1(args);
	if (!flat_args)
		return (1);
	if (!evaluate_duplicate(flat_args))
		return (1);
	
	i = 0;
	/* while (i < argc - 1)
	{
		int j = 0;
		while (args[i][j] != NULL)
		{
			ft_printf("argv[%d][%d]: %s\n", i, j, args[i][j]);
			j++;
		}
		i++;
	} */
	
	while (flat_args[i] != NULL)
	{
		ft_printf("args[%d]: %s\n", i, flat_args[i]);
		i++;
	}
	return (0);
}
