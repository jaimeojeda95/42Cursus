/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funtions_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:01:57 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/16 21:26:14 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//imprime un solo caracter %c
int	ft_putchar(int str)
{
	return (write(1, &str, 1));
}

//imprime un string %s
int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

//para %d, &i
int	ft_putnbr(int str)
{
	int	i;

	i = 0;
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
int	ft_unsigned_write(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_unsigned_write(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}
