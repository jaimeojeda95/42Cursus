/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:35:22 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/04/25 18:19:08 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)*/

static int	ft_contar_adelante(const char *s1, const char *set)
{
	int	contador1;
	int	num_total;
	int	i;
	int	j;

	i = 0;
	j = 0;
	contador1 = 0;
	num_total = ft_strlen(s1);
	while (s1[i] != '\0' && !(contador1 != i))
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				contador1++;
			j++;
		}
		i++;
	}
	return (contador1);
}

static int	ft_contar_hacia_atras(const char *s1, char const *set)
{
	int	num_total1;
	int	found;
	int	contador2;
	int	j;

	contador2 = 0;
	num_total1 = ft_strlen(s1);
	found = 1;
	while ((num_total1 - 1) >= 0 && found == 1)
	{
		j = 0;
		found = 0;
		while (set[j] != '\0')
		{
			if (s1[num_total1 - 1] == set[j])
			{
				contador2++;
				found = 1;
			}
			j++;
		}
		if (found == 1)
			num_total1--;
	}
	return (contador2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		contador1;
	int		contador2;
	int		num_total;
	int		indice_final;
	char	*str_result;

	num_total = ft_strlen(s1);
	contador1 = ft_contar_adelante(s1, set);
	contador2 = ft_contar_hacia_atras(s1, set);
	str_result = malloc(num_total - contador1 - contador2 + 1);
	if (str_result == NULL)
		return (NULL);
	indice_final = 0;
	while (contador1 < num_total - contador2)
	{
		str_result[indice_final] = s1[contador1];
		contador1++;
		indice_final++;
	}
	str_result[indice_final] = '\0';
	return (str_result);
}
/*
int	main(void)
{
	const char	mensaje[] = "yxzCoddyzxy";
	const char	set[] = "xyz";

	printf("str resultante: %s\n", ft_strtrim(mensaje, set));
	return (0);
}*/