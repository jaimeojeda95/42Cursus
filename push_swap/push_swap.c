/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:18:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/18 17:52:51 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	check_errors_digits_duplicates(int	argc, char **argv)
{
	int	i;
	int	j;
	
	i = 1;
	while (i < argc)
	{
		ft_atoi(argv[i]);
		j = i + 1;
		while (j < argc)
		{
			ft_atoi(argv[j]);
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				write(1, "Error\n", 6);
			j++;
		}
		i++;
	}
} */

/* void	check_errors(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 1;
	if (argc == 1)
		return ;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
			{
				write(1, "Error\n", 6);
				return ;
			}
			j++;
		}
		i++;
	}
	// check_errors_digits_duplicates(argc, argv);
}

char	**parse_int(int argc, char **argv)
{
	int	i;
	char **args;

	i = 1;
	while (i < argc)
	{
		args = ft_split(argv[i], ' ');
		if (args == NULL)
			return (NULL);
		i++;
	}
	printf("argv[3]: %s\n", args[0]);
	return(args);
} */

char	**evaluate(int argc, char **argv)
{
	char	**storage;

	
}


int	main(int argc, char **argv)
{
	char	**args;

	check_errors(argc, argv);
	/* if (argc < 2)
		return (0); */
	args = parse_int(argc, argv);
	
	return (0);
}
