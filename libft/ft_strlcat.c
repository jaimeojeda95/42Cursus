/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:38:50 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/13 15:21:38 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Me permite concatenar src al final de dst, sin pasar
//del tamaño size total, y termina en \0 si hay espacio.
//Me tiene que devolver largos de cadenas

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
		i++;
	if (size == i)
	{
		return (size + ft_strlen(src));
	}
	while (src[j] != '\0' && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if ((i + j) < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[15] = "hola";
	char	src[] = "Coddy";
	size_t	n = 2;
	size_t	resultado;
	
	resultado = ft_strlcat(dest, src, n);
	printf("mensaje copiado (solo lo uso como guia): %s\n", dest);
	printf("largo de la cadena esperada: %zu\n", resultado);
	return (0);
}*/