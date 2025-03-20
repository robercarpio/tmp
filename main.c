/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:54 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/13 16:05:34 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	count;
	int	i;
	char	**arr;
	char	**tmp;
	
	if (argc > 1)
	{
		i = 1;
		count = 0;
		while (argv[i])
		{
			index_counter(&count,argv[i]);
			i++;
		}
		i = 1;
		arr = (char **)malloc(count * sizeof(char *));
		while (argv[i])
		{
			tmp = ft_split(argv[i],' ');
			allocate_args(&arr,tmp);
			i++;
		}
	}
	else
		printf("Error: args\n");
	return(0);
}
