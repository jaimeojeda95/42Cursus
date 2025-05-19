/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:44:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/19 22:18:28 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	*ptr = NULL;
	ssize_t	bytes_read = 1;
	char	buffer[BUFFER_SIZE + 1];
	char *temp;
	
	while (!ft_strchr(ptr, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		temp = ft_strjoin(ptr,buffer);
		free(ptr);
		ptr = ft_strdup(temp);
		free(temp);
	}
	if 
	if (bytes_read == -1)
	{
		perror("Error al leer el archivo");
		close(fd);
		return (ptr_aux);
	}
	buffer[bytes_read] = '\0';
	printf("%s\n", buffer);
	close(fd);
	return (0);
}

/* int	main(void)
{
	fd = open("prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error al leer el archivo");
		return(1);
	}
	
} */