/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:55:43 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/21 11:00:53 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int		*arr;
	int		i;

	i = 0;
	arr = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		arr[i] = f(arr[i]);
		i++;
	}
	return (arr);
}
