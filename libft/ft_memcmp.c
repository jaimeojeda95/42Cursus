/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:32:42 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/14 19:04:25 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Se utiliza para comparar dos bloques de memoria

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)str1;
	ptr2 = (const unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	mensaje1[] = "hola Coddy";
	const char	mensaje2[] = "hola Coddy";
	size_t	n = 11;

	if (ft_memcmp(mensaje1, mensaje2, n) > 0)
		printf("El valor es: %d\n STR1 es mayor",
ft_memcmp(mensaje1, mensaje2, n));
	else if (ft_memcmp(mensaje1, mensaje2, n) < 0)
		printf("El valor es: %d\n STR2 es mayor",
ft_memcmp(mensaje1, mensaje2, n));
	else
		printf("No se encontro una diferencia, STR1 y STR2 son iguales hasta N");

}*/
