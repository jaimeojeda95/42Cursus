/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conditions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:12:30 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/16 21:47:15 by jaojeda-         ###   ########.fr       */
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
		count += ft_hexa_min(va_arg(args, unsigned long));
	if (format == 'X')
		count += ft_hexa_max(va_arg(args, unsigned long));
	if (format == '%')
		count += write(1, "%", 1);
	return (count);
}
