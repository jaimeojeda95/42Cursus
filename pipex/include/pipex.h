/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:03:51 by PC                #+#    #+#             */
/*   Updated: 2025/09/18 22:05:27 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <sys/wait.h>
# include "../libft/libft.h"

# define EXTREME_READ 0
# define EXTREME_WRITE 1
//# define DEFAULT_INFILE "src/infile"

typedef struct	s_data
{
	char	*infile;
	char	*outfile;
	int		fd_infile;
	int		fd_outfile;
} t_data;

int		check_files(t_data	*data);


#endif