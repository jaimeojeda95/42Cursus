/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:16:59 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/20 21:48:18 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*str_temp;
	char	c_temp;

	c_temp = (char)c;
	str_temp = (char *)str;
	i = 0;
	if (!str)
		return (NULL);
	if (c_temp == '\0')
		return ((str_temp + ft_strlen(str_temp)));
	while (str_temp[i] != '\0')
	{
		if (str_temp[i] == c_temp)
			return ((str_temp + i));
		i++;
	}
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	n;
	size_t	i;

	n = ft_strlen(s);
	ptr = malloc(n + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str3;

	str3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str3[i + j] = s2[j];
		j++;
	}
	str3[i + j] = '\0';
	return (str3);
}
