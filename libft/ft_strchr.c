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
	char	*str_temp;
	char	c_temp;

	c_temp = (char)c;
	str_temp = (char *)str;
	i = 0;
	if (c_temp == '\0')
		return ((str_temp + ft_strlen(str_temp)));
	while (str_temp[i] != '\0')
	{
		if (str_temp[i] == c_temp)
			return ((str_temp + i));
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	mensaje[] = "hola, Coddy. 4F";
	int	to_find = 'C';

	printf("el caracter a encontrar es: %c\n", to_find);
	if (ft_strchr(mensaje, to_find) != NULL)
		printf("el caracter se encontro en la posicion:
		%ld\n", ft_strchr(mensaje, to_find) - mensaje);
	else
		printf("el valor es NULL");
	return (0);
} */
