/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:44:35 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/16 19:55:10 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	int		index;
	int		min_index;

	index = 0;
	min_index = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (-1);
	while (min_index < max)
		arr[index++] = min_index++;
	index = 0;
	while (arr[index])
	{
		range[index] = &arr[index];
		index ++;
	}
	return (max - min);
}
