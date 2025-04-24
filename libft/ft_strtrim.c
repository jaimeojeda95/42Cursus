/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:35:22 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/24 20:55:52 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	contador1;
	int	num_total;
	int	i;
	int	j;

	i = 0;
	j = 0;
	contador1 = 0;
	num_total = ft_strlen(s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				contador++;
			j++;
		}
	i++;
	}
}

int	main(void)
{
	const char	mensaje[] = "yxzCoddyzxy";
	const char	set[] = "xyz";

	printf("str resultante: %s\n", ft_strtrim(mensaje, set));
	return (0);
}
