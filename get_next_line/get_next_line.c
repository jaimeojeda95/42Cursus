/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:44:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/28 15:58:51 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Funcion principal
char *get_next_line(int fd)
{
	static char *storage = NULL;
	ssize_t bytes_read;
	char *real_line;
	char *temp;

	storage = create_storage(fd, storage, &bytes_read);
	if (!storage)
		return (NULL);
	real_line = ft_separate_lines(storage, bytes_read);
	if (real_line == NULL)
		return (NULL);
	temp = storage;
	storage = ft_substr(storage, ft_strlen(real_line), (ft_strlen(storage)));
	free(temp);
	return (real_line);
}

char *create_storage(int fd, char *storage, ssize_t *bytes_read)
{
	char buffer[BUFFER_SIZE + 1];
	char *temp;

	*bytes_read = 1;
	while (!ft_strchr(storage, '\n') && *bytes_read != 0)
	{
		*bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (*bytes_read == -1)
		{
			perror("Error al leer el archivo");
			return (NULL);
		}
		buffer[*bytes_read] = '\0';
		temp = ft_strjoin(storage, buffer);
		free(storage);
		storage = ft_strdup(temp);
		free(temp);
	}
	return (storage);
}

char *ft_separate_lines(char *storage, ssize_t bytes_read)
{
	char *new_str1 = NULL;
	char *str_temp;
	int i;
	int j;

	i = 0;
	j = 0;
	while (storage[i] != '\0')
	{
		if (storage[i] == '\n')
		{
			str_temp = ft_substr(storage, j, (i - j) + 1);
			if (new_str1)
				free(new_str1);
			new_str1 = ft_strdup(str_temp);
			free(str_temp);
		}
		i++;
		if (bytes_read == 0)
		{
			if (new_str1)
				free(new_str1);
			return (end_of_file(storage, i, j));
		}
	}
	return (new_str1);
}

char *end_of_file(char *storage, int i, int j)
{
	char	*new_str2 = NULL;
	char	*str_temp;
	
	if (storage)
	{
		str_temp = ft_substr(storage, j, (i - j) + 1);
		if (new_str2)
			free(new_str2);
		new_str2 = ft_strdup(str_temp);
		free(str_temp);
	}
	else
	{
		free(storage);
		storage = NULL;
		return (NULL);
	}
}
/* int	main(void)
{
	int		fd;

	fd = open("prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error al leer el archivo");
		return (1);
	}
	char	*line = "ENTRE";
	while (line)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
	close (fd);
	return (0);
} */