/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:42:56 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/07 20:39:34 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MLX42/MLX42.h"
#include <stdio.h>
#include <stdlib.h>

#define WIDTH 1520
#define HEIGHT 720

int32_t	main(void)
{
	mlx_t* mlx = mlx_init(WIDTH, HEIGHT, "SoLong", true);
	if (!mlx)
	{
		puts(mlx_strerror(mlx_errno));
		return (EXIT_FAILURE);
	}

	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}
