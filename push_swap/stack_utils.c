/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:49:08 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/08/04 21:15:24 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(int	n)
{
	t_stack	*new_node;
	
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = n;
	new_node->index = -1;
	new_node->cost = -1;
	new_node->target_node = NULL;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	stack_addnext(t_stack **stack, t_stack *new_node)
{
	t_stack	*temp;
	
	if (!stack || !new_node)
		return ;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->next = NULL;
	new_node->prev = temp;
}

void	stack_addfront(t_stack **stack, t_stack	*new_node)
{
	if (!stack || !new_node)
		return ;
	new_node->next = *stack;
	new_node->prev = NULL;
}