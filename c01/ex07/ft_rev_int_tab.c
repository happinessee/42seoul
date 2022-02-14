/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:37:49 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/07 13:02:05 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		cnt;
	int		cnt2;

	cnt = 0;
	cnt2 = size - 1;
	if (size == 1)
		return ;
	while (size / 2 > cnt)
	{
		swap(&tab[cnt], &tab[cnt2]);
		cnt++;
		cnt2--;
	}
}
