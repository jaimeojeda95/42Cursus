/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_formats.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:01:57 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/12 20:02:00 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//imprime un solo caracter
int	ft_putchar(char str)
{
	if (!str)
		return (0);
	write(1, &str, 1);
	return (1);
}
//imprime un string

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

////para %d, &i
int	ft_putnbr(int str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (str < 0)
	{
		i += write (1, "-", 1);
		str = (-1 * str);
	}
	if (str >= 10)
		i += ft_putnbr(str / 10);
	i += ft_putchar((str % 10) + '0');
	return (i);
}

//para %u

