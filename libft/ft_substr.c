/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:34:24 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/23 19:34:26 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Esta función toma una cadena de caracteres (s), un índice de inicio (start), y
una longitud (len), y devuelve una nueva cadena que comienza en el índice start
de la cadena original y tiene una longitud de len caracteres (o hasta el final
de la cadena si no hay suficientes caracteres)*/

// Linea 38: Debo usar ft_strdup("") en lugar de return ("\0") porque se crea
// una cadena que en memoria estática no se puede liberar adecuadamente. Al usar
// ft_strdup(""), se crea una cadena vacía en memoria dinámica, la cual sí
// puedes liberar correctamente más tarde cuando ya no la necesite

//Linea 39: Asegura que la longitud de la subcadena no sea mayor que el resto
//de la cadena desde "start y no lea más allá del tamaño que se rquiere"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	str_len;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char const	s[] = "hola Coddy";
	unsigned int	start = 4;
	size_t	len    = 4;

	printf ("resultado con start: %d y len: %zu --> %s",
start, len, ft_substr(s, start, len));
	return (0);
}*/
