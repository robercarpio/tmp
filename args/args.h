/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:58 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/27 19:03:09 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_H
# define ARGS_H

#include <stdio.h>
#include <stdlib.h>

#include "../aux/aux.h"

int		index_counter(char **args);
void	allocate_args(char ***dest, char **src);
t_stack args_to_stack(t_list *list);
t_list	*args_to_list(char **args);
int	*args_to_array(char **args);
void	index_stack(t_stack *stack, int *arr, int arr_size);

#endif