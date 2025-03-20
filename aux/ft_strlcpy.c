/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:22:22 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/06 15:23:04 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int	ft_strlcpy(char *dst, char *src, int size)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (src[r] != '\0')
	{
		r++;
	}
	if (size == 0)
		return (r);
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (r);
}
