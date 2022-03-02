/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:28:15 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/24 18:40:29 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_swap_int(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *current;
	t_list *next;

	int		swapped;

	if (lst == 0)
		return (0);
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		current = lst;
		while (current)
		{
			next = current -> next;
			if (next != 0 && (*cmp)(current->data, next->data) == 0)
			{
				ft_swap_int(&(current->data), &(next->data));
				swapped = 1;
			}
			current = next;
		}
	}
	return (lst);
}
