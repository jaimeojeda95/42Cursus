/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:22:11 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/13 20:53:47 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta funcion me devuelve un puntero a la primera aparición
//del carácter c en la cadena str

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return ((char *)(str + ft_strlen(str)));
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	mensaje[] = "hola, Coddy. 4F";
	int	to_find = 'C';

	printf("el caracter a encontrar es: %c\n", to_find);
	if (ft_strchr(mensaje, to_find) != NULL)
		printf("el caracter se encontro en la posicion: %ld\n",
ft_strchr(mensaje, to_find) - mensaje);
	else
		printf("el valor es NULL");
	return (0);
}*/
