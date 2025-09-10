/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:02:24 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/14 16:31:38 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca la primera aparición de un carácter
//específico en un bloque de memoria.

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)str)[i]) == (unsigned char)c)
			return ((void *)((unsigned char *)str + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	mensaje[] = "hola Coddy";
	int	mensaje2 = 'd';
	size_t	n = 10;

	printf("El caracter a encontrar es: %c\n", mensaje2);
	if (ft_memchr(mensaje, mensaje2, n) != NULL)
		printf("El caracter se encontro en la posicion: %ld\n",
(const char *)ft_memchr(mensaje, mensaje2, n) - mensaje);
	else
		printf("NULL: no hay coincidencia");

}*/
