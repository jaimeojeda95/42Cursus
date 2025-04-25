/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:00:32 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/18 17:26:26 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*str, size_t	n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*
int	main(void)
{
	size_t num;
	size_t size;

	num = 1;
	size = 11;
	ft_calloc(num, size);

	size_t	i;
	int	*mensaje;
	i = 0;
	mensaje = ft_calloc(num, size);
	while (i < num * size)
	{
		printf("array[%zu] = %d\n", i, mensaje[i]);
		i++;
	}*/

	/*char	*mensaje;
	char	*texto;
	size_t	i;

	mensaje = ft_calloc(num, size);
	texto = "hola Coddy";
	i = 0;
	while (texto[i] != '\0' && i < size - 1)
	{
		mensaje[i] = texto[i];
		i++;
	}
	mensaje[i] = '\0';
	printf("%s\n", mensaje);
	if (texto[i] == '\0')
		printf("Texto copiado completamente.\n");
	else
		printf("Texto truncado: solo se copio parcialmente.\n");
	return (0);
}*/
