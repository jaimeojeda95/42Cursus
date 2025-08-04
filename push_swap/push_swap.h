/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 21:03:11 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/04 20:26:15 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_stack_node
{
	int		value;
	int		index;
	int		cost;
	struct	s_stack_node	*target_node;
	struct	s_stack_node	*next;
	struct	s_stack_node	*prev;
}	t_stack;


char	***evaluate_arguments(int argc, char **argv);
int		validate_args(int argc, char ***args);
int		validate_int(int argc, char ***args);
char	**flat_list1(char ***args);
char	**flat_list2(char ***args, int n);
int		evaluate_duplicate(char **flat_args);
void	free_args(char ***args);

#endif