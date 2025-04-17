/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:09:08 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/21 18:06:46 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

t_stack args_to_stack(t_list *list)
{
	t_stack stack;
	int	i;

	i = 0;
	stack.size = list_size(list);
	while (list)
	{
		if (i == 0)
			stack.head = list;
		if (i == stack.size)
			stack.tail = list;
		list = list->next;
		i++;
	}
	return (stack);
}

//head cuando el contador sea 0
//tail cuando el contador sea igual index counter
