/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:23:01 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/13 16:49:12 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	char	mensaje[] = "hoLA empa$4nada de pollo";
	int	i;

	i = 0;
	while (mensaje[i] != '\0')
	{
		mensaje[i] = ft_toupper(mensaje[i]);
		i++;
	}
	printf("%s\n", mensaje);
	return (0);
}*/
