/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:12:11 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/15 18:47:41 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	create_map(t_game *game, char *filename)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	game->rows = count_rows(filename);
	fd = open (filename, O_RDONLY);
	if (fd == -1)
		return (perror("Error al abrir archivo"), 0);
	game->map = malloc(sizeof(char *) * (game->rows + 1));
	if (!game->map)
		return (close(fd), 0);
	line = get_next_line(fd);
	while (line)
	{
		if (line && ft_strlen(line) > 0 && line[ft_strlen(line) - 1] == '\n')
			line[ft_strlen(line) - 1] = '\0';
		game->map[i++] = ft_strdup(line);
		free(line);
		line = get_next_line(fd);
	}
	game->map[i] = NULL;
	close (fd);
	return (1);
}

// rows = filas ≈ lineas
int	count_rows(char *filename)
{
	int		fd;
	char	*line;
	int		rows;

	rows = 0;
	if (!filename)
		return (ft_printf("Error: Archivo nulo\n"), 0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (perror("Error al leer el archivo"), 0);
	line = get_next_line(fd);
	while (line)
	{
		rows++;
		free (line);
		line = get_next_line(fd);
	}
	close (fd);
	if (rows <= 0)
		return (ft_printf ("Error: archivo vacío\n"), 0);
	return (rows);
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
