/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:13:21 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/27 19:32:01 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	argv++;
	t_stack	stack;
	int	len  = index_counter (argv);
	int	*arr = args_to_array(argv);
	int	*sorted = sort_array(arr,len);
	stack = args_to_stack(args_to_list(argv));
	int	i = 0;
	t_list	*node;
	node = stack.head;

	index_stack(&stack,sorted,len);
	while (node)
	{
		printf("node %d\n",i);
		printf("value %d\n",node->value);
		printf("index %d\n",node->index);
		printf("--------------\n");
		node = node->next;
		i++;
	}
	
	return (0);
}
