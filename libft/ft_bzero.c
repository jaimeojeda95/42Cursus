/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:05:38 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/24 18:09:50 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Se usa para establecer/llenar un
//bloque de memoria con ceros

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
/*
int	main(void)
{
	char	mensaje[] = "hola, coddy";
	size_t	n = 4;

	//no podré ver el resultaado porque printf imprime hasta
el finl de una cadena y aquí lo está comenzando al inicio.
	ft_bzero(mensaje, n);
	printf("Despues de ft_bzero: %s\n", mensaje);
	bzero(mensaje, n);
	printf("Despues de bzero: %s", mensaje);
	return (0);
}*/
