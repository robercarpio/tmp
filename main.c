/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:13:21 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/02 01:17:40 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{	
	t_stack	stack_a;
	t_stack stack_b;
	t_list	*node;
	argv++;
	if (argc == 1)
		return(0);
	else
	{
		if (parse(argv))
		{
			init_stacks(&stack_a,&stack_b,argv);
			sort(&stack_a,&stack_b);
			node = stack_a.head;
			while (node)
			{
				printf("%d\n",node->value);
				node = node->next;
			}

		}
		else
			printf("Error\n");
	}

	return (0);
}
