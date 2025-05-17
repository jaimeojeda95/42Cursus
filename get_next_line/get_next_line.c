/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:44:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/17 19:27:17 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE + 1];
	char	*acumulate_str;
	
	fd = open("prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return(1);
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read != '\n')
	if (bytes_read == -1)
	{
		perror("Error al leer el archivo");
		close(fd);
		return (1);
	}
	buffer[bytes_read] = '\0';
	printf("%s\n", buffer);
	close(fd);
	return (0);
}