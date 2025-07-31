/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:25:33 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/31 16:31:52 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	
// Evaluo si son duplicados
int	evaluate_duplicate(char **flat_args)
{
	int	i;
	int	j;
	int	n;
	int	k;

	i = 0;
	while (flat_args[i] != NULL)
	{
		n = ft_atol(flat_args[i]);
		j = i + 1;
		while (flat_args[j])
		{
			k = ft_atol(flat_args[j]);
			if (n == k)
				return (ft_printf("Error\n"), 0);
			j++;
		}
		i++;
	}
	return (1);
}