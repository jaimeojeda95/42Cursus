/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:03:39 by PC                #+#    #+#             */
/*   Updated: 2025/09/18 22:05:35 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main (int argc, char **argv, char **envp)
{
	t_data	data;

	(void)argv;
	(void)envp;
	if (argc != 5)
		return (write(2, "Use this format: \"./pipex file1 cmd1 cmd2 file2\"\n", 49), 1);
	data.infile = argv[1];
	data.outfile = argv[4];
	if (!check_files(&data))
		return (1);
	return (0);
}