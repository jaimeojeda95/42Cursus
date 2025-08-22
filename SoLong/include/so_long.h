/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:00:00 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/22 20:55:18 by jaojeda-         ###   ########.fr       */
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

# define TILE 64

//------------------------- STRUCTS -------------------------

typedef struct s_textures
{
	mlx_image_t		*floor;
	mlx_image_t		*wall;
	mlx_image_t		*exit;
	mlx_image_t		*collectable;
	mlx_image_t		*player;
	mlx_image_t		*collect;
} t_textures;


typedef struct s_game
{
	char		**map;
	int			rows;
	int			columns;
	int			player_x;
	int			player_y;
	int			total_collectable;
	int			width;
	int			height;
	int			point;
	int			moves;
	mlx_t		*mlx;
	t_textures	tx;
	mlx_image_t	*player_image;
}	t_game;

//------------------------- FUNTIONS -------------------------
int			check_ber(char *filename);
int			count_rows(char *filename);
int			create_map(t_game *game, char *filename);
int			ft_validation_columns_chars(t_game *game);
int			ft_validation_walls(t_game *game);
int			ft_validation_duplicates(t_game *game);
char		**ft_copy_map(t_game *game);
void		ft_find_player(t_game *game);
void		ft_flood_fill(char** map_copy, t_game *game, int x, int y);
int			ft_map_playable(char **map_copy);
int			ft_validate_map_playable(t_game *game);
int			ft_validate_map(t_game *game);
void		init_window(t_game *game);
mlx_image_t *ft_load_png(t_game *game, char *file);
void		ft_load_all_png(t_game	*game);
void		ft_draw_map(t_game *game, int x, int y);
void		ft_draw_player(t_game *game);
void		ft_move_player(t_game *game, int new_y, int new_x);
void		ft_key_hooks(mlx_key_data_t keydata, void *param);
void		ft_close_window(void *param);
void		ft_clean_exit(t_game *game, int code);
void		ft_disable_collect_at(t_game *game, int x, int y);

#endif