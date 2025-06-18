/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:44:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/06/18 22:39:36 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*storage = NULL;
	ssize_t		bytes_read;
	char		*line;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = create_storage(fd, storage, &bytes_read);
	if (!storage)
		return (NULL);
	line = ft_separate_lines(storage);
	if (line == NULL)
		return (NULL);
	temp = storage;
	storage = ft_substr(storage, ft_strlen(line), (ft_strlen(storage)));
	free(temp);
	return (line);
}

char	*create_storage(int fd, char *storage, ssize_t *bytes_read)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*temp;

	if (!storage)
		storage = ft_strdup("");
	if (!storage)
		return (NULL);
	*bytes_read = 1;
	while (!ft_strchr(storage, '\n') && *bytes_read != 0)
	{
		*bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (*bytes_read == -1)
		{
			free(storage);
			return (NULL);
		}
		buffer[*bytes_read] = '\0';
		temp = ft_strjoin(storage, buffer);
		free(storage);
		storage = temp;
	}
	return (storage);
}

char	*ft_separate_lines(char *storage)
{
	size_t	i;

	i = 0;
	if (!storage || storage[0] == '\0')
		return (NULL);
	while (storage[i] && storage[i] != '\n')
		i++;
	if (storage[i] == '\n')
		i++;
	return (ft_substr(storage, 0, i));
}

/* int	main(void)
{
	int		fd;

	fd = open("copia.txt", O_RDONLY);
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