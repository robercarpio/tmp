/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_counter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:47:53 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/10 18:03:48 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

void	index_counter(int *count, char *str)
{
	char	**split;
	int		i;

	split = ft_split(str, ' ');
	i = 0;
	while (split[i])
	{
		i++;
		(*count)++;
	}
	free_split(split);
}
