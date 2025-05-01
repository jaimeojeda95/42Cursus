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
malloc*/

static int	ft_contar_adelante(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	contador1;
	int	found;

	i = 0;
	contador1 = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		found = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				found = 1;
			j++;
		}
		if (found == 1)
			contador1++;
		else
			return (contador1);
		i++;
	}
	return (contador1);
}

static int	ft_contar_hacia_atras(const char *s1, char const *set)
{
	int	i_num_total;
	int	found;
	int	contador2;
	int	j;

	contador2 = 0;
	i_num_total = ft_strlen(s1);
	while ((i_num_total - 1) >= 0)
	{
		j = 0;
		found = 0;
		while (set[j] != '\0')
		{
			if (s1[i_num_total - 1] == set[j])
				found = 1;
			j++;
		}
		if (found == 1)
			contador2++;
		else
			return (contador2);
		i_num_total--;
	}
	return (contador2);
}

static char	*ft_set_igual_s1(char const *s1, char const *set)
{
	int		contador1;
	int		contador2;
	int		num_total;
	char	*str_result;

	num_total = ft_strlen(s1);
	contador1 = ft_contar_adelante(s1, set);
	contador2 = ft_contar_hacia_atras(s1, set);
	str_result = malloc(1);
	if (contador1 + contador2 >= num_total)
	{
		if (str_result == NULL)
			return (NULL);
		str_result[0] = '\0';
		return (str_result);
	}
	return (NULL);
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
	if (contador1 + contador2 >= num_total)
		str_result = ft_set_igual_s1(s1, set);
	else
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
	const char	mensaje[] = "    ";
	const char	set[] = " ";

	printf("str resultante: %s\n", ft_strtrim(mensaje, set));
	return (0);
}*/