/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_GNL.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:59:31 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/06/20 18:34:42 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
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
	// char	*line2 = get_next_line(fd);
	// if (line2)
	// 	printf("%s", line2);
	
	// char	*line3 = get_next_line(fd);
	// if (line3)
	// 	printf("%s", line3);
		
	// char	*line4 = get_next_line(fd);
	// if (line4)
	// 	printf("%s\n", line4);

	// char	*line5 = get_next_line(fd);
	// if (!line5)
	// 	printf("%s", line5);
	close (fd);
	return (0);
}
