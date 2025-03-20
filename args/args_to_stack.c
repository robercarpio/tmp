/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:09:08 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 20:51:09 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

t_stack args_to_stack(char **args)
{
	int		i;
	int		j;
	char	**split;
	t_stack	stack;
	int		len;
	int		count;
	(void) len;
	i = 0;
	count = 0;
	while (args[i])
	{
		j = 0;
		split = ft_split(args[i], ' ');
		while (split[j])
		{
			j++;
		}
		i++;
	}
	stack.head = NULL;
	stack.tail = NULL;
	stack.size = 0;
	return (stack);
}

//head cuando el contador sea 0
//tail cuando el contador sea igual index counter
