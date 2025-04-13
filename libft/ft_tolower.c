/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:39:41 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/13 16:48:49 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	char	mensaje[] = "HOLA Coddy$4";
	int	i;

	i = 0;
	while (mensaje[i] != '\0')
	{
		mensaje[i] = ft_tolower(mensaje[i]);
		i++;
	}
	printf("%s\n", mensaje);
	return (0);
}*/
