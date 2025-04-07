/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:28:54 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/07 19:39:28 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (
			!(str[i] >= 65 && str[i] <= 90)
			&& !(str[i] >= 97 && str[i] <= 122)
			&& !(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	mensaje[] = "yasomosestudiantes";

	printf("%d", ft_isalnum(mensaje));
	return (0);
}*/
