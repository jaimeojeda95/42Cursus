/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 21:03:11 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/07/31 21:54:01 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

//

char	***evaluate_arguments(int argc, char **argv);
int		validate_args(int argc, char ***args);
int		validate_int(int argc, char ***args);
char	**flat_list1(char ***args);
char	**flat_list2(char ***args, int n);
int		evaluate_duplicate(char **flat_args);

#endif