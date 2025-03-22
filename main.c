/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:13:21 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/21 19:46:48 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		t_list	*node;
		t_stack	stack;
	
		argv++;
	
		node = args_to_list(argv);
		stack = args_to_stack(node);
		printf("%d\n",stack.head->value);
		printf("%d\n",stack.tail->value);
		printf("%d\n",stack.size);
		
	}
	else
	{
		printf("Error: argumentos insuficientes\n");
	}
	return (0);
}
