/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:11:21 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/24 18:19:56 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función comprueba si hay caracteres alfabeticos

int	ft_isalpha(int c)
{
	if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	caracter = 'H';
	
	printf("Recordatorio: 1 es verdadero, 0 falso\n");
	printf("%d", ft_isalpha(caracter));
	return (0);
}*/