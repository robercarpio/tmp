/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:13:21 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 21:15:40 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_list(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	printf("Lista enlazada: ");
	while (tmp)
	{
		printf("%d ", tmp->value);
		tmp = tmp->next;
	}
	printf("\n");
}

void	free_list(t_list *stack)
{
	t_list	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

int	main(int argc, char *argv[])
{
	t_list	*node;

	if (argc < 2)
	{
		printf("Error: argumentos insuficientes\n");
		return (1);
	}
	node = args_to_list(argv + 1);
	if (!node)
	{
		printf("Error: no se pudo crear la lista\n");
		return (1);
	}
	print_list(node);
	free_list(node);
	return (0);
}
