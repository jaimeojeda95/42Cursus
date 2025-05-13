/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:12:44 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/13 18:21:46 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char str)
{
	if (!str)
		return (0);
	write(1, &str, 1);
	return (1);
}

int	ft_hexa_min(unsigned long n)
{
	int		i;
	char	*hex;
	i = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_hexa_min(n / 16); 
	i += ft_putchar(hex[n % 16]);
	return (i);
}

//para %p
int	ft_putnbr_base(unsigned long n)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	write(1, "0x", 2);
	if (n >= 16)
		i += ft_hexa_min(n / 16);
	i += ft_putchar(hex [n % 16]);
	return (i);
}

int	main(void)
{
	unsigned long	ptr = ;
	// printf("%p\n", ptr);
	ft_putnbr_base(ptr);
	
	// printf("%u\n", printf("%u\n", str));
	// printf("printf original: %p\n", printf("%x\n", num));
	// int i = printf("%s\n", str);
	// ft_hexa_min(num);
	
	// printf(" mi versión ft_printf: %d\n", ft_putnbr_base(str));
	return (0);
}