/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:03:57 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/24 15:29:34 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función me permite crear una nueva cadena tras aplicar la funcion "f"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		num_total;
	char	*resultado;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	num_total = ft_strlen(s);
	resultado = malloc(num_total + 1);
	if (resultado == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		resultado[i] = f(i, s[i]);
		i++;
	}
	resultado[i] = '\0';
	return (resultado);
}
