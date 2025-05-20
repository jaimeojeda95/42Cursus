/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:44:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/20 21:47:40 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Leer, buscar y almacenar
char	*get_next_line(int fd)
{
	static char	*ptr = NULL;
	ssize_t		bytes_read;
	char		buffer[BUFFER_SIZE + 1];
	char		*temp;

	bytes_read = 1;
	if (!ptr)
		ptr = ft_strdup("");
	while (!ft_strchr(ptr, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			perror("Error al leer el archivo");
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(ptr, buffer);
		free(ptr);
		ptr = ft_strdup(temp);
		free(temp);
	}
	close(fd);
	return (ptr);
}

// Función para cortar lo almacenado

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
        printf("%s", line);
		free(line);
    }
	close (fd);
	return (0);
}