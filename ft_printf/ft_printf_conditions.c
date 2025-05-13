/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conditions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:12:30 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/13 17:56:37 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_printf_conditions(char specifier)
{
	if (str[i + 1] == 'c')
	count += ft_putchar(va_arg(args, char));
	if (str[i + 1] == 's')
	count += ft_putstr(va_arg(args, char *));
	if (str[i + 1] == 'p')
	count += ft_putstr(va_arg(args, unsigned long));
	if (str[i + 1] == 'd')
	count += ft_putnbr(va_arg(args, int));
	if (str[i + 1] == 'i')
	count += ft_putnbr(va_arg(args, int));
	if (str[i + 1] == 'u')
	count += ft_unsigned_write(va_arg(args, unsigned long));
	if (str[i + 1] == 'x')
	count += ft_hexa_min(va_arg(args, unsigned long));
	if (str[i + 1] == 'X')
	count += ft_hexa_max(va_arg(args, unsigned long));
	if (str[i + 1] == '%')
	count += ft_putstr(va_arg(args, void));
}
