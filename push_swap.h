/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:41 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/13 17:31:08 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>

#include "./aux/aux.h"
#include "./args/args.h"

typedef struct s_list
{
	struct s_list	*prev;
	int				value;
	struct s_list	*next;
}	t_list;
#endif