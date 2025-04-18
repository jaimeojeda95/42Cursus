/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 21:29:03 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/13 22:32:04 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*linea 37: ultima vista = -1 porque 0 puede ser la primera
posición de la cadena*/

char	*ft_strchr(const char *str, int c)
{
	int		ultima_vista;
	size_t	i;

	i = 0;
	ultima_vista = -1;
	if (c == '\0')
		return ((char *)(str + ft_strlen(str)));
	while (str[i] != '\0')
	{
		if (str[i] == c)
			ultima_vista = i;
		i++;
	}
	if (ultima_vista == -1)
		return (NULL);
	return ((char *)(str + ultima_vista));
}
/*
int	main(void)
{
	const char	mensaje[] = "hola, Coddy. 4F";
	int	to_find = 'd';
    
	printf("el caracter a encontrar es: %c\n", to_find);
	if (ft_strchr(mensaje, to_find) != NULL)
		printf("el caracter se encontro en la posicion:
		%ld\n", ft_strchr(mensaje, to_find) - mensaje);
	else
		printf("el valor es NULL");
return (0);
}*/
