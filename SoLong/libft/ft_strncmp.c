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

#include "libft.h"

//Se utiliza para comparar dos cadenas de caracteres hasta n

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	const char	msj1[] = "test\200";
	const char	msj2[] = "test\0";
	size_t	size = 6;
	int	resultado;
	int	rslt1;

	rslt1 = strncmp(msj1, msj2, size);
	resultado = ft_strncmp(msj1, msj2, size);
	printf("%d\n", rslt1);
	printf("%d\n", resultado);
	return (0);
}
*/