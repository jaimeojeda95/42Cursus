/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:28:54 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/07 19:39:28 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función comprueba si hay caracteres alfanumericos
//Si da 1 es verdadero y 0 = falso

int	ft_isalnum(int c)
{
	if (!(c >= '0' && c <= '9')
		&& !(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	mensaje[] = "Hola Coddy";
	int	i;

	i = 0;
	while (mensaje[i] != '\0')
	{
		printf("'%c' ¿es alfanumerico? %d\n", 
		mensaje[i], ft_isalnum(mensaje[i]));
		i++;
	}
	//char	caracter = 'y';

	//printf("%d", ft_isalnum(caracter));
	return (0);
}*/