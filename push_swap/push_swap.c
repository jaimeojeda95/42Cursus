/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:18:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/15 20:38:10 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

//Estoy creando funcion para confirmar errores
void	push_swap(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	
	if (argc == 1)
		return ;
	while (i < argc)
	{
		if (!ft_isdigit(argv[i][j]))
		{
			printf("Error\n");
			j++;
		}
		i++;
	}
	printf("%i\n", i);
	printf("%i\n", j);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
