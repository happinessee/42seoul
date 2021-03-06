/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:40:47 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/24 18:43:33 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *i;

	while (*begin_list && cmp((*begin_list)->data, data_ref))
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	i = *begin_list;
	while (i && i -> next)
	{
		if (cmp(i->next->data, data_ref) == 0)
		{
			tmp = i -> next;
			i -> next = tmp -> next;
			free(tmp);
		}
		i = i -> next;
	}
}
