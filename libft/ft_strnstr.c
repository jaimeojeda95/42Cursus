/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:58:07 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/14 19:58:18 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <bsd/string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)(big));
	i = 0;
	while (i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	msj1[] = "hola cachapa";
	const char	to_find[] = "cachapa";
	size_t	size = 10;
	char	*resultado;
	char	*rslt1;

	rslt1 = strnstr(msj1, to_find, size);
	resultado = ft_strnstr(msj1, to_find, size);
	if (resultado != NULL)
		printf("Encontrado: %s\n", resultado);
	else
		printf("Subcadena no encontrada (NULL)\n");
	printf("%s\n", rslt1);
	return (0);
}*/
