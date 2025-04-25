/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:57:05 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/10 20:45:20 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = (char *)dest;
	i = 0;
	j = 0;
	while (j < n)
	{
		ptr[i] = ((const char *)src)[j];
		j++;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	mensaje[] = "hola, Coddy";
	const char	src[] = "apartamento 4F";
	size_t	n = 4;

	ft_memcpy(mensaje, src, n);
	printf("%s\n", mensaje);
	memcpy(mensaje, src, n);
	printf("%s", mensaje);
}*/
