/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:42:36 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/06/25 21:16:37 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*storage[1024];
	ssize_t		bytes_read;
	char		*line;
	char		*temp;

	bytes_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage[fd] = create_storage(fd, storage[fd], &bytes_read);
	if (!storage[fd])
		return (NULL);
	line = ft_separate_lines(storage[fd]);
	if (!line)
	{
		free(storage[fd]);
		storage[fd] = NULL;
		return (NULL);
	}
	temp = storage[fd];
	storage[fd] = ft_substr(storage[fd], ft_strlen(line),
			(ft_strlen(storage[fd])));
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
	int	fd[2];
	fd[0]	= open("prueba.txt", O_RDONLY);
	fd[1]	= open("prueba2.txt", O_RDONLY);
	char *line;
	char *line2;
	line = "";
	if	(fd[0] == -1 || fd[1] == -1)
	{
		printf("error de lectura");
		return (1);
	}

	while (line)
	{
		line = get_next_line(3);
		printf("%s", line);
		free(line);
		line2 = get_next_line(fd[1]);
		printf("%s", line2);
		free(line2);
	}
 	close(fd[0]);
 	close(fd[1]);
	
	return (0);
} */