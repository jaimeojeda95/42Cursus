/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:37:46 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/14 13:52:08 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	const char	msj1[] = "hola cachapa";
	const char	msj2[] = "hola achapx";
	size_t	size = 9;
	size_t	resultado;
	size_t	rslt1;

	rslt1 = strncmp(msj1, msj2, size);
	resultado = ft_strncmp(msj1, msj2, size);
	printf("%zu\n", resultado);
	printf("%zu\n", rslt1);
	return (0);
}*/
