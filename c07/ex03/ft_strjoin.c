/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:44:21 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/16 14:14:50 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	get_all_len(int size, char **strs, char *sep)
{
	int		len;
	int		index;

	index = 0;
	len = 0;
	len = get_len(sep) * (size - 1);
	while (strs[index])
	{
		len += get_len(strs[index]);
		index ++;
	}
	return (len);
}

void	join(char *arr, char **strs, char *sep, int size)
{
	int		index;
	int		index2;
	int		index3;

	index = 0;
	index3 = 0;
	while (strs[index])
	{
		index2 = 0;
		while (strs[index][index2] && index < size)
			arr[index3++] = strs[index][index2++];
		index2 = 0;
		while (sep[index2] && index + 1 < size )
			arr[index3++] = sep[index2++];
		index ++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	char	*arr;
	int		len;

	arr = 0;
	index = 0;
	len = get_all_len(size, strs, sep);
	if (size <= 0)
		return (arr);
	arr = (char *)malloc(len * sizeof(int));
	if (arr == 0)
		return (arr);
	join(arr, strs, sep, size);
	return (arr);
}
