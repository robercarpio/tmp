/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:06:30 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 19:55:07 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int		char_checker(char **args)
{
	int		i;
	int		j;
	char	**split;
	int		b;

	i = 0;
	b = 1;
	while (args[i] && b == 1)
	{
		j = 0;
		split = ft_split(args[i],' ');
		while (split[j] && b == 1)
		{
			if(!only_chars_allowed(split[j],"0123456789+- "))
				b = 0;
			j++;
		}
		free_split(split);
		i++;
	}
	return (b);
}
