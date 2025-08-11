/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:00:00 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/11 19:56:32 by jaojeda-         ###   ########.fr       */
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
int		count_lines(char *filename);
char	**create_map(char *filename, int i);

#endif