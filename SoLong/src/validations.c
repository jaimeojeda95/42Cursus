/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:12:11 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/12 21:31:35 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

char	**create_map(char *filename, int i)
{
	int		fd;
	int		lines;
	char	*line;
	char	**map;

	lines = count_lines(filename);
	fd = open (filename, O_RDONLY);
	if (fd == -1)
		return (perror("Error al abrir archivo"), NULL);
	map = malloc(sizeof(char *) * (lines + 1));
	if (!map)
		return (close(fd), NULL);
	line = get_next_line(fd);
	while (line)
	{
		if (line && ft_strlen(line) > 0 && line[ft_strlen(line) - 1] == '\n')
			line[ft_strlen(line) - 1] = '\0';
		map[i++] = ft_strdup(line);
		free(line);
		line = get_next_line(fd);
	}
	map[i] = NULL;
	close (fd);
	return (map);
}

int	count_lines(char *filename)
{
	int		fd;
	char	*line;
	int		count_lines;

	count_lines = 0;
	if (!filename)
	return (ft_printf("Error: Archivo nulo\n"), -1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (perror("Error al leer el archivo"), -1);
	line = get_next_line(fd);
	while (line)
	{
		count_lines++;
		free (line);
		line = get_next_line(fd);
	}
	close (fd);
	if (count_lines <= 0)
		return (ft_printf ("Error: archivo vacío\n"), -1);
	return (count_lines);
}

int	check_ber(char *filename)
{
	int	len;

	len = ft_strlen(filename);
	if (len < 5)
		return (0);
	if (filename[len - 4] != '.' || filename[len - 3] != 'b'
		|| filename[len - 2] != 'e' || filename[len -1] != 'r')
		return (0);
	return (1);
}
