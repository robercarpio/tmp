/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_dup_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:10:48 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/22 18:31:54 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int	find_dup_value(t_list *node)
{
	int	n;
	int	b;
	n = node->value;
	b = 0;
	node = node->next;
	while (node && b == 0)
	{
		if(n == node->value)
			b = 1;
		node = node->next;
	}
	return(b);
}
