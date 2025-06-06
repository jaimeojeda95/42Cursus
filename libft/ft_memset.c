/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:53:57 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/08 15:02:52 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Sirve para establecer un bloque de
//memoria con un valor específico

void	*ft_memset(void	*str, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = (unsigned char) x;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	mensaje[] = "hola Coddy";
	int	n = 18;
	char	x = '0';

	printf ("%s\n", (char *)ft_memset(mensaje, x, n));
	printf ("%s", (char *)memset(mensaje, x, n));
	return (0);
}*/
