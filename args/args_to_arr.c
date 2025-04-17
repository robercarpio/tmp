/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:29:45 by rober             #+#    #+#             */
/*   Updated: 2025/03/26 19:01:22 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

int	*args_to_array(char **args)
{
	int		len;
	int		*arr;
	int		i;
	int		j;
	char	**split;
	int		x;

	x = 0;
	len = index_counter(args);
	arr = malloc(len * sizeof(int));
	i = 0;
	while (args[i])
	{
		j = 0;
		split = ft_split(args[i],' ');
		while (split[j])
		{
			arr[x] = ft_atoi(split[j]);
			x++;
			j++;
		}
		i++;
	}

	return (arr);
}
