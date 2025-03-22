/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:06:40 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/22 17:51:28 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

#include <stdio.h>

#include "../aux/aux.h"

int	char_checker(char **args);
int	void_checker(char **args);
int	sig_checker(char **args);
int	dup_checker(t_list *node);
int	sort_checker(t_list *node);

#endif