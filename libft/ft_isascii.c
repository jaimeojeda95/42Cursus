/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:44:55 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/07 20:01:14 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 0 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	mensaje[] = "prueba";

	printf("%d", ft_isascii(mensaje));
	return (0);
}*/
