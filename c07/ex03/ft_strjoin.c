/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:44:21 by hyojeong          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/16 17:34:02 by hyojeong         ###   ########.fr       */
=======
/*   Updated: 2022/02/16 17:41:56 by hyojeong         ###   ########.fr       */
/*   Updated: 2022/02/16 14:15:45 by hyojeong         ###   ########.fr       */
>>>>>>> eb7073321d88a02df0e5642c5dac97e6d816aa10
/*   Updated: 2022/02/16 14:12:33 by hyojeong         ###   ########.fr       */
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

void	join(char *arr, char **strs, char *sep, int size)
{
	int		index;
	int		index2;
	int		index3;

	index = 0;
	index3 = 0;
	while (strs[index] && index < size)
	{
		index2 = 0;
		while (strs[index][index2] && index < size)
			arr[index3++] = strs[index][index2++];
		index2 = 0;
		while (sep[index2] && index + 1 < size)
			arr[index3++] = sep[index2++];
		index ++;
	}
	arr[index3] = 0;
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
<<<<<<< HEAD
	if (!(arr = (char *)malloc(len + 1)))
=======
	arr = (char *)malloc(len);
	if (arr == NULL)
>>>>>>> eb7073321d88a02df0e5642c5dac97e6d816aa10
		return (0);
	join(arr, strs, sep, size);
	return (arr);
}
