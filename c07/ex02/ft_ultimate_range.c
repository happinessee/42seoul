/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:44:35 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/15 15:43:39 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	int		index;

	index = 0;
	arr = 0;
	if (min >= max)
		return (0);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == 0)
		return (-1);
	while (min < max)
	{
		arr[index] = min;
		index ++;
		min ++;
	}
	range = &arr;
	return (max - min);
}
