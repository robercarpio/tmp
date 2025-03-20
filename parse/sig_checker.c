/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:35:48 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 20:05:49 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	sig_checker(char **args)
{
	int		i;
	int		j;
	char	**split;
	int		b;
	int		count;
	
	b = 1;
	i = 0;
	while (args[i] && b == 1)
	{
		j = 0;
		split = ft_split(args[i],' ');
		while (split[j] && b == 1)
		{
			count = sig_count(split[j]);
			if (!((count == 1 && (split[i][0] == '-' || split[i][0] == '+') && (split[i][1] >= 48
			&& split[i][1] <= 57)) || (count == 0 && (split[i][0] >= 48
			&& split[i][0] <= 57))))
			{
				b = 0;	
			}
			j++;
		}
		free_split(split);
		i++;
	}
	return (b);
}
