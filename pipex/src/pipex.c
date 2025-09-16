/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PC <PC@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:03:39 by PC                #+#    #+#             */
/*   Updated: 2025/09/16 21:26:25 by PC               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main (int argc, char **argv, char **envp)
{
	(void)argv;
	(void)envp;
	if (argc != 5)
	{
		ft_printf("Use this format: \"./pipex file1 cmd1 cmd2 file2\"\n");
		return (1);
	}
	return (0);
}