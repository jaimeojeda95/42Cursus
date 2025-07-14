/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:44:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/06/25 18:22:58 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*storage = NULL;
	ssize_t		bytes_read;
	char		*line;
	char		*temp;

	bytes_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = create_storage(fd, storage, &bytes_read);
	if (!storage)
		return (NULL);
	line = ft_separate_lines(storage);
	if (!line)
	{
		free(storage);
		storage = NULL;
		return (NULL);
	}
	temp = storage;
	storage = ft_substr(storage, ft_strlen(line), (ft_strlen(storage)));
	free(temp);
	return (line);
}

char	*create_storage(int fd, char *storage, ssize_t *bytes_read)
{
	char	*buffer;
	char	*temp;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!storage)
		storage = ft_strdup("");
	while (!ft_strchr(storage, '\n') && *bytes_read != 0)
	{
		*bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (*bytes_read == -1)
		{
			free(storage);
			free (buffer);
			return (NULL);
		}
		buffer[*bytes_read] = '\0';
		temp = ft_strjoin(storage, buffer);
		free(storage);
		storage = temp;
	}
	free (buffer);
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

	printf("%i\n", BUFFER_SIZE);
	fd = open("prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error al leer el archivo");
		return (1);
	}
	char	*line = "ENTRÉ";
	while (line)
	{
		line = get_next_line(0);
		printf("%s", line);
		free(line);
	}
	close (fd);
	return (0);
} */