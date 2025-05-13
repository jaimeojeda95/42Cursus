/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:49:31 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/12 15:49:33 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *str, ...)
{
	va_list	args;
	va_start(args, str);
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 's')
				count += ft_putstr(va_arg(args, char *));
		}
		else
			count += write(1, &str[i], 1);
	}
	va_end(args);
	return (count);
}
