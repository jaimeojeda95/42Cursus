/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:44:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/23 18:19:39 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


// Funcion principal 
char	*get_next_line(int fd)
{
	static char	*storage = NULL;
	ssize_t		bytes_read;
	char		buffer[BUFFER_SIZE + 1];
	char		*temp;
	char		*real_line;

	bytes_read = 1;
	while (!ft_strchr(storage, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			perror("Error al leer el archivo");
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(storage, buffer);
		free(storage);
		storage = ft_strdup(temp);
		free(temp);
	}
	real_line = ft_separate_lines(storage);
	return (real_line);
}

char	*ft_separate_lines(char *storage)
{
	char	*new_str1 = NULL;
	char	*str_temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while(storage[i] != '\0')
	{
		if (storage[i] == '\n')
		{
			str_temp = ft_substr(storage, j, (i - j));
			new_str1 = ft_strdup(str_temp);
			free (str_temp);
			str_temp = ft_substr(storage, i, (ft_strlen(storage)));
			storage = ft_strdup(str_temp);
			// free(str_temp);
		}
		i++;
	}
	return(new_str1);
}
	
int	main(void)
{
	int		fd;

	fd = open("prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error al leer el archivo");
		return (1);
	}
	
	char	*line = get_next_line(fd);
	if (line)
	{
		printf("%s\n", line);
		// free(line);
	}

	char	*line2 = get_next_line(fd);
	if (line2)
	{
		printf("%s\n", line2);
		// free(line2);
	}
	
	char	*line3 = get_next_line(fd);
	if (line2)
	{
		printf("%s\n", line3);
		// free(line2);
	}
	close (fd);
	return (0);
}