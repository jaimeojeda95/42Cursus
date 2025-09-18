/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:36:37 by PC                #+#    #+#             */
/*   Updated: 2025/09/18 22:03:39 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	check_files(t_data	*data)
{
	data->fd_infile = open(data->infile, O_RDONLY);
	if (data->fd_infile < 0)
	{
		perror("Invalid file");
		data->fd_infile = open("/dev/null", O_RDONLY);
		if (data->fd_infile < 0)
			return (perror("No se puede crear un infile"), 0);
	}
	data->fd_outfile = open(data->outfile, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (data->fd_outfile < 0)
		return (perror("Invalid outfile"), 0);
	return (1);
}