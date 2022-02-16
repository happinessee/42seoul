/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:44:21 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/17 01:04:03 by hyojeong         ###   ########.fr       */
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
	len = get_len(sep) * (size - 1);
	while (strs[index] && index < size)
	{
		len += get_len(strs[index]);
		index ++;
	}
	return (len + 1);
}

char	*join(char **strs, char *sep, int size, int len)
{
	int		index;
	int		index2;
	int		index3;
	char	*tmp;

	index = 0;
	index3 = 0;
	tmp = (char *)malloc(len);
	while (strs[index] && index < size)
	{
		index2 = 0;
		while (strs[index][index2] && index < size)
			tmp[index3++] = strs[index][index2++];
		index2 = 0;
		while (sep[index2] && index + 1 < size)
			tmp[index3++] = sep[index2++];
		index ++;
	}
	tmp[index3] = 0;
	return (tmp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	char	*arr;
	int		len;

	index = 0;
	len = get_all_len(size, strs, sep);
	if (size <= 0)
		return (0);
	arr = join(strs, sep, size, len);
	if (arr == NULL)
		return (0);
	return (arr);
}
