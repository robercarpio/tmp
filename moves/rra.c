/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:38:51 by rober             #+#    #+#             */
/*   Updated: 2025/03/23 20:43:27 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	rra(t_stack *stack_a)
{
	t_list	*first;	
	t_list	*last;
	
	if (!stack_a->head || stack_a->head->value == stack_a->tail->value)
		return ;
	first = stack_a->head;
	last = stack_a->tail;
	stack_a->tail = last->prev;
	stack_a->tail->next = NULL;
	last->prev = NULL;
	last->next = first;
	stack_a->head->prev = last;
	stack_a->head = last;
	write(1,"rra\n",4);
}
