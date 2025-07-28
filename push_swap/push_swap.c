/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:18:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/26 19:45:39 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Creo un storage (args) en donde meto todos los argumentos
char	***evaluate_arguments(int argc, char **argv)
{
	char	***args;
	args = malloc(sizeof(char **) * (argc - 1));
	int		i;

	i = 1;
	while (i < argc)
	{
		args[i - 1] = ft_split(argv[i], ' ');
		if (args[i - 1] == NULL)
		return (NULL);
		i++;
	}
	return (args);
}

// Debo evaluar los argumentos de args
int	validate_args(int argc, char ***args)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	str = args[i][j];
	while (i < argc)
	{
		j = 0;
		while (str != NULL)
		{
			if (str == '+' || str == '-')
				j++;
				
		}
		j++;
	}
	i++;
}


int	main(int argc, char **argv)
{
	char	***args;
	int		i;

	args = evaluate_arguments(argc, argv);
	i = 0;
	while (i < argc - 1)
	{
		int j = 0;
		while (args[i][j] != NULL)
		{
			printf("argv[%d][%d]: %s\n", i, j, args[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}
