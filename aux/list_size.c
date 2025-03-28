/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:44:33 by rober             #+#    #+#             */
/*   Updated: 2025/03/21 19:38:26 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int list_size(t_list *list)
{
      int   i;

      i = 0;
      while (list)
      {
            list = list->next;
            i++;
      }
      return (i);
}
