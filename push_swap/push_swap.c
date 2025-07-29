/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:18:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/29 20:32:32 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Creo un storage (args) en donde meto todos los argumentos
char	***evaluate_arguments(int argc, char **argv)
{
	char	***args;
	int		i;

	args = malloc(sizeof(char **) * (argc));
	i = 1;
	while (i < argc)
	{
		args[i - 1] = ft_split(argv[i], ' ');
		if (args[i - 1] == NULL)
			return (NULL);
		i++;
	}
	args[argc - 1] = NULL;
	return (args);
}

// Reviso los signos y que sean digitos
int	validate_args(int argc, char ***args)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (args[i][j] != NULL)
		{
			k = 0;
			if (args[i][j][k] == '+' || args[i][j][k] == '-')
			{
				if (!ft_isdigit(args[i][j][k + 1]))
					return (ft_printf("Error\n"), 0);
				k++;
			}
			while (args[i][j][k])
				if (!ft_isdigit(args[i][j][k++]))
					return (ft_printf("Error\n"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

// Valido que os argumentos no sean INT MAX O MIN
int	validate_int(int argc, char ***args)
{
	int		i;
	int		j;
	long	n;

	i = 0;
	while (i < argc -1)
	{
		j = 0;
		while (args[i][j] != NULL)
		{
			n = ft_atol(args[i][j]);
			if (n < INT_MIN || n > INT_MAX)
				return (ft_printf("Error\n"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

// Convierto de strings a int (parseo)


int	main(int argc, char **argv)
{
	char	***args;
	int		i;

	args = evaluate_arguments(argc, argv);
	if (!validate_args(argc, args))
		return (1);
	if (!validate_int(argc, args))
		return (1);

	i = 0;
	while (i < argc - 1)
	{
		int j = 0;
		while (args[i][j] != NULL)
		{
			ft_printf("argv[%d][%d]: %s\n", i, j, args[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}
