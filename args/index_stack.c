/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:46:41 by rober             #+#    #+#             */
/*   Updated: 2025/03/27 18:57:31 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

void	index_stack(t_stack *stack, int *arr, int arr_size)
{
	t_list *current;
	int i;

	if (!stack || !stack->head || !arr)
		return;
	current = stack->head;
	while (current)
	{
		i = 0;
		while (i < arr_size)
		{
			if (current->value == arr[i])
			{
				current->index = i;
				break;
			}
			i++;
		}
		current = current->next;
	}
}
