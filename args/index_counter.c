/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_counter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:47:53 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 20:20:25 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"


int	index_counter(char **args)
{
	int		count;
	int		i;
	int		j;
	char	**split;

	i = 0;
	count = 0;
	while (args[i])
	{
		j = 0;
		split = ft_split(args[i],' ');
		while (split[j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}
// void	index_counter(int *count, char *str)
// {
// 	char	**split;
// 	int		i;

// 	split = ft_split(str, ' ');
// 	i = 0;
// 	while (split[i])
// 	{
// 		i++;
// 		(*count)++;
// 	}
// 	free_split(split);
// }
