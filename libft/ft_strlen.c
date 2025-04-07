/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:10:25 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/07 20:59:49 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
unsigned int	ft_strlen(const char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	mensaje[] = "Hola coddy";

	printf("%u\n", ft_strlen(mensaje));
	printf("%lu", strlen(mensaje));
	return (0);
}*/
