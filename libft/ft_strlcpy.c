/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 11:56:02 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/13 12:40:49 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Me permite copiar de src a dst como mucho size - 1
//caracteres y siempre termina en \0 si size > 0

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
int	main(void)
{
	size_t	size;
	char	dest[5];
	char	origen[] = "hola papelon con limon";

	size = 13;
	ft_strlcpy(dest, origen, sizeof(dest));
	printf("mensaje copiado: %s\n", dest);
	printf("largo de la cadena original: %zu\n", ft_strlcpy(dest, origen, size));
	return (0);
}*/
