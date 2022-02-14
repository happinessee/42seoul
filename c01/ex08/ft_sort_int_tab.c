/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:13:17 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/07 14:26:53 by hyojeong         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int		cnt;
	int		cnt2;

	cnt = 0;
	cnt2 = 0;
	while (cnt < size)
	{
		while (cnt2 < size - 1)
		{
			if (tab[cnt2] > tab[cnt2 + 1])
				swap(&tab[cnt2], &tab[cnt2 + 1]);
			cnt2++;
		}
		cnt2 = 0;
		cnt++;
	}
}
