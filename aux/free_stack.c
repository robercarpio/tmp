/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:17:47 by rober             #+#    #+#             */
/*   Updated: 2025/04/16 16:35:52 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

void	free_stack(t_stack *stack)
{
	t_list	*current;
	t_list	*next;

	current = stack->head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}
