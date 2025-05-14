/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funtions_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:28:05 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/14 19:51:52 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// para %x
int	ft_hexa_min(unsigned int n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		i += ft_hexa_min(n / 16);
	i += ft_putchar(hex[n % 16]);
	return (i);
}

// para %X
int	ft_hexa_max(unsigned int n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_hexa_max(n / 16);
	i += ft_putchar(hex[n % 16]);
	return (i);
}
