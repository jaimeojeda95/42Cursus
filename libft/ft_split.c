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

char	**ft_split(char const *s, char c)
{
	int	i;
	int	cont_c;
	char**	strs;

	i = 0;
	cont_c = 1;
	//Cuento y creo mis substrings (y sus espacios de memoria)
	while ((s[i]) != '\0')
	{
		if (s[i] == c)
			cont_c++;
		i++;
	}
	strs = malloc((cont_c + 1) * sizeof(char*));
	strs[cont_c] = NULL;
}

int	main(void)
{
	char	*mensaje = "Hola, Coddy, como, estas?";
	char	c = ',';

	ft_split(mensaje, c);
	return (0);
}