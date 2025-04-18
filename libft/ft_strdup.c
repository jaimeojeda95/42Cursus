/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:50:20 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/18 19:06:55 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*Linea 36: es n + 1 para que me el espacio para el '\0'*/
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

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	n;
	size_t	i;

	n = ft_strlen(s);
	ptr = malloc(n + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	const char	*mensaje;
	char		*copia;

	mensaje = "Hola, Coddy";
	copia = ft_strdup(mensaje);
	printf("%s\n", copia);
	return (0);
}*/
