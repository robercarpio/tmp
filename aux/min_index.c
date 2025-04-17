/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:57:29 by rober             #+#    #+#             */
/*   Updated: 2025/04/03 17:02:07 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int   min_index(t_stack *stack)
{
	t_list	*node;
	int		min;

	node = stack->head;
	min = node->index;

	if(!stack || !stack->head)
		return(0);
	while (node)
	{
		if(node->index < min)
			min = node->index;
		node = node->next;
	}
	return (min);
}
