/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:28:35 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/22 17:34:13 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	dup_checker(t_list *node)
{
	int	b;
	
	b = 1;
	while (node && b == 1)
	{
		if (find_dup_value(node))
			b = 0;
		node = node->next;
	}
	return(b);
}
