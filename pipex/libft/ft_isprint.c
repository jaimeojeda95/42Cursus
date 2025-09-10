/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:01:37 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/07 20:10:08 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Indica si un caracteer printiable

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	mensaje = 'h';

	printf("%d", ft_isprint(mensaje));
	return (0);
}*/
