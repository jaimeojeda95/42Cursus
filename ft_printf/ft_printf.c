/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:49:31 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/14 20:47:26 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	void	*ptr;
	va_list	args;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				count += ft_putchar(va_arg(args, int));
			if (str[i] == 's')
				count += ft_putstr(va_arg(args, char *));
			if (str[i] == 'p')
			{
				ptr = va_arg(args, void *);
				if (ptr)
					count += ft_putnbr_base((unsigned long)ptr);
				else
					count += ft_putstr("(nil)");
			}
			if (str[i] == 'd')
				count += ft_putnbr(va_arg(args, int));
			if (str[i] == 'i')
				count += ft_putnbr(va_arg(args, int));
			if (str[i] == 'u')
				count += ft_unsigned_write(va_arg(args, unsigned int));
			if (str[i] == 'x')
				count += ft_hexa_min(va_arg(args, unsigned int));
			if (str[i] == 'X')
				count += ft_hexa_max(va_arg(args, unsigned long));
			if (str[i] == '%')
				count += write(1, "%", 1);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
/* int main(void)
{
	char *str = "hola";

	ft_printf("%s\n", str);
	printf("%s\n", str);
	return 0;
} */