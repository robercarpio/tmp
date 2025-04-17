/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:44:40 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/22 18:44:25 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	sort_checker(t_list *node)
{
	int	b;
	int	val;

	val = node->value;
	node = node->next;
	b = 0;
	while (node && b == 0)
	{
		if(val > node->value)
			b = 1;
		val = node->value;
		node = node->next;
	}
	return(b);
}
