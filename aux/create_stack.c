/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:02:55 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/22 19:04:11 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

t_stack	create_stack(void)
{
	t_stack	stack;

	stack.head = NULL;
	stack.size = 0;
	stack.tail = NULL;
	return(stack);
}