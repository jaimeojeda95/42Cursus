/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:49:31 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/16 21:46:01 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
/* int main(void)
{
	char *str = "hola";

	ft_printf("%s\n", str);
	printf("%s\n", str);
	return 0;
} */