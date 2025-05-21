/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:44:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/21 17:27:14 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


// Funcion principal 
char	*get_next_line(int fd)
{
	static char	*ptr = NULL;
	ssize_t		bytes_read;
	char		buffer[BUFFER_SIZE + 1];
	char		*temp;
	char		*real_line;

	bytes_read = 1;
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
	real_line = ft_separate_lines(ptr);
	return (real_line);
}

char	*ft_separate_lines(char *ptr)
{
	char	*new_str1;
	char	*new_str2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while(ptr[i] != '\0')
	{
		if (ptr[i] == '\n')
		{
			new_str1 = ft_substr(ptr, j, (i - j));
			free (ptr);
		}
		else if (ptr[i] != '\0')
			new_str2 = ft_substr(ptr, i, (ft_strlen(ptr) - ft_strlen(new_str1)));
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
	if(line)
    {
        printf("%s\n", line);
		free(line);
    }
	close (fd);
	return (0);
}