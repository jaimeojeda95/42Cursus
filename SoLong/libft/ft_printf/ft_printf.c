/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:49:31 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/12 21:29:18 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_conditions(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		count += ft_validate_ptr(va_arg(args, void *));
	if (format == 'd')
		count += ft_putnbr(va_arg(args, int));
	if (format == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (format == 'u')
		count += ft_unsigned_write(va_arg(args, unsigned int));
	if (format == 'x')
		count += ft_hexa_min(va_arg(args, unsigned int));
	if (format == 'X')
		count += ft_hexa_max(va_arg(args, unsigned int));
	if (format == '%')
		count += write(1, &format, 1);
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_printf_conditions(str[i], args);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
