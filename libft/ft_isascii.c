/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:44:55 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/07 20:01:14 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Verifica si c es un valor dentro del conjunto de caracteres ASCII

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	mensaje = 'p';

	printf("%d", ft_isascii(mensaje));
	return (0);
}*/