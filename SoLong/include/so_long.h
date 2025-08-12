/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:00:00 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/12 22:34:19 by PC               ###   ########.fr       */
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

}	t_game;


//------------------------- FUNTIONS -------------------------
int		check_ber(char *filename);
int		count_rows(char *filename);
char	**create_map(char *filename, int i);
int		validation_map(char **map);

#endif