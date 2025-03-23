/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:13:21 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/23 19:16:31 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		t_stack	stack_a;
		t_stack	stack_b;
		t_list	*node;
		argv++;
		stack_a = args_to_stack(args_to_list(argv));
		stack_b = create_stack();

		(void) stack_b;
		node = stack_a.head;
		while (node)
		{
			printf("%d\n",node->value);
			node = node->next;
		}
		sa(&stack_a);
		write(1,"\n",1);
		node = stack_a.head;
		while (node)
		{
			printf("%d\n",node->value);
			node = node->next;
		}	
	}
	else
	{
		printf("Error: argumentos insuficientes\n");
	}
	return (0);
}
