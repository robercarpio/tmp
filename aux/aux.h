/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:58 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/12 14:16:13 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_H
# define AUX_H

#include <stdlib.h>

char	**ft_split(char *s, char c);
char	*ft_substr(char *s,int start,int len);
int		ft_strlen(char *str);
void	*ft_memcpy(void *dest, void *src, int n);
int		ft_strlcpy(char *dst, char *src, int size);
void	ft_bzero(void *s, int n);
void	*ft_calloc(int nmemb, int size);
void	*ft_memcpy(void *dest, void *src, int n);
char	*ft_strdup(char *s);
int		ft_strlen(char *str);
int		ft_strlcpy(char *dst, char *src, int size);
void	free_split(char **arr);
int	array_length(char **arr);

#endif