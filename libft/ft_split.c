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

size_t	ft_count_word(char const *s, char c)
{
	int		i;
	size_t	total_words;

	i = 0;
	total_words = 0;
	while ((s[i]) != '\0')
	{
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				total_words++;
		}
		i++;
	}
	return (total_words);
}

static void	ft_free(char **result_final, int i_matrix)
{
	if (result_final[i_matrix] == NULL)
	{
		while (i_matrix >= 0)
		{
			free(result_final[i_matrix]);
			i_matrix--;
		}
		free(result_final);
	}
}

static int	ft_execute_split(
	char **result_final, int i_matrix, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			j = i;
			while (s[j] != c && s[j] != '\0')
				j++;
			result_final[i_matrix] = ft_substr(s, i, (j - i));
			if (result_final[i_matrix] == NULL)
			{
				ft_free(result_final, i_matrix);
				return (0);
			}
			i_matrix++;
		}
		i = j;
		j++;
	}
	return (1);
}
// Linea 92: El ! invierte el valor, así que si devuelve 0 en
// el return entra en el if. Return (1) significa que todo salió bien

char	**ft_split(char const *s, char c)
{
	char	**result_final;
	int		i_matrix;
	int		i;
	int		j;

	i = 0;
	i_matrix = 0;
	j = 0;
	result_final = malloc(((ft_count_word(s, c)) + 1) * sizeof(char *));
	if (result_final == NULL)
		return (NULL);
	if (!(ft_execute_split(result_final, i_matrix, s, c)))
		return (NULL);
	result_final[ft_count_word(s, c)] = NULL;
	return (result_final);
}

/*
int main(void)
{
	const char *s = "     Hola Coddy      como estas?    ";
	int i;
	char **str;
	i = 0;
	str = ft_split(s, ' ');
	while (str[i])
	{
		printf("word: %s\n", str[i]);
		i++;
	}
	return (0);
}*/