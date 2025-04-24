/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:17:42 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/07 19:31:42 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función comprueba si hay caracteres numericos
//Si da 1 es verdadero y 0 = falso

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}
/*
int	main (void)
{
	char	mensaje = '5';

	printf("%d", ft_isdigit(mensaje));
}*/
