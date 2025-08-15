/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:00:00 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/15 21:47:05 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include "../MLX42/include/MLX42/MLX42.h"

//------------------------- STRUCTS -------------------------

typedef struct s_game
{
	char	**map;
	int		rows;
	size_t	columns;
}	t_game;

//------------------------- FUNTIONS -------------------------
int		check_ber(char *filename);
int		count_rows(char *filename);
int		create_map(t_game *game, char *filename);
int		validation_columns_chars(t_game *game);
int		validation_walls(t_game *game);
int		validation_duplicates(t_game *game);

#endif