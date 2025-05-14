/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conditions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:12:30 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/14 20:42:59 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_conditions(char format, int count, va_list args)
{
	void	*ptr;

	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			count += ft_putnbr_base((unsigned long)ptr);
		else
			count += ft_putstr("(nil)");
	}
	else if (format == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_unsigned_write(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_hexa_min(va_arg(args, unsigned int));
	else if (format == 'X')
		count += ft_hexa_max(va_arg(args, unsigned int));
	else if (format == '%')
		count += write(1, "%", 1);
	return (count);
}
