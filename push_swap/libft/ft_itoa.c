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

#include "libft.h"

static int	ft_contar_numeros(long num)
{
	int	num_total;

	num_total = 0;
	if (num < 0)
	{
		num = -num;
		num_total++;
	}
	else if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		num_total++;
	}
	return (num_total);
}

char	*ft_itoa(int n)
{
	int		num_total;
	char	*str;
	long	num;

	num = (long)n;
	num_total = ft_contar_numeros(num);
	str = malloc(num_total + 1);
	if (str == NULL)
		return (NULL);
	str[num_total] = '\0';
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	else if (num == 0)
		str[num_total - 1] = ((num % 10) + '0');
	while (num > 0)
	{
		str[num_total - 1] = ((num % 10) + '0');
		num = (num / 10);
		num_total--;
	}
	return (str);
}
/*
int	main(void)
{
	int	num = -2586;

	printf ("El int convertida a char es: %s\n", ft_itoa(num));
	return (0);
}*/
