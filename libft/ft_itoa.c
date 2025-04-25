/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:56:11 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/24 13:28:54 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_contar_numeros(int n)
{
	int	num_total;
	int	contador;

	contador = 1;
	num_total = 1;
	if (n < 0)
	{
		contador = -1;
		n = -n;
		num_total++;
	}
	else if (n == 0)
		return (1);
	while ((n / 10) > 0)
	{
		n = n / 10;
		num_total++;
	}
	return (num_total);
}

char	*ft_itoa(int n)
{
	int		num_total;
	int		num_aux;
	char	*str;

	num_total = ft_contar_numeros(n);
	num_aux = num_total;
	str = malloc(num_total + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	else if (n == 0)
		str[num_total - 1] = ((n % 10) + '0');
	while (n > 0)
	{
		str[num_total - 1] = ((n % 10) + '0');
		n = (n / 10);
		num_total--;
	}
	str[num_aux] = '\0';
	return (str);
}
/*
int	main(void)
{
	int	num = -2586;

	printf ("El int convertida a char es: %s\n", ft_itoa(num));
	return (0);
}*/
