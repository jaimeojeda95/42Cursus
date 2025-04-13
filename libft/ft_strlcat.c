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

#include <stdio.h>

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*línea 37: para que me muestre solo los caracteres que copia, no
es necesario, solo con el return basta*/
//linea 43: (i > size)
size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (size <= i)
	{
		if (size > 0)
			dest[size - 1] = '\0';
		return (i + ft_strlen(src));
	}
	while (src[j] != '\0' && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
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
