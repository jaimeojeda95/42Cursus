/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funtions_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:28:05 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/29 20:43:38 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//para validad que el puntero sea válido
int	ft_validate_ptr(void *ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		i += ft_putstr("(nil)");
	else
	{
		i += write(1, "0x", 2);
		i += ft_putnbr_base((unsigned long)ptr);
	}
	return (i);
}

//para %p
int	ft_putnbr_base(unsigned long n)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		i += ft_putnbr_base(n / 16);
	i += ft_putchar(hex [n % 16]);
	return (i);
}

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
