/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:17:41 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/16 17:38:51 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		index;

	index = 0;
	arr = 0;
	if (min >= max)
		return (arr);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (0);
	while (min < max)
	{
		arr[index] = min;
		index ++;
		min ++;
	}
	return (arr);
}
