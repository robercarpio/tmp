/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:58 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/13 15:42:56 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_H
# define ARGS_H

#include <stdio.h>

#include "../aux/aux.h"

void	index_counter(int *count, char *str);
void	allocate_args(char ***dest, char **src);

#endif