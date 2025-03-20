/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:58:09 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 21:21:49 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

t_list	*args_to_list(char **args)
{
	int		i;
	int		j;
	char	**split;
	t_list	*head;
	t_list	*new;
	t_list	*tail;

	head = NULL;
	tail = NULL;
	i = 0;
	while (args[i])
	{
		split = ft_split(args[i], ' '); // Separa el argumento en números individuales
		j = 0;
		while (split[j])
		{
			new = malloc(sizeof(t_list)); // Reserva memoria para un nuevo nodo
			if (!new)
				return (free_split(split), NULL); // Manejo de error simple
			new->value = ft_atoi(split[j]); // Convierte el string a entero
			new->next = NULL;
			new->prev = tail;
			if (!head)
				head = new;
			else
				tail->next = new;
			tail = new;
			j++;
		}
		free_split(split);
		i++;
	}
	return (head);
}

