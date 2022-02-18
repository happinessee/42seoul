/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:25:33 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/19 08:36:08 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

int	is_charset(char *str, char *charset, int index)
{
	int		i;
	int		j;
	int		len;	

	len = ft_strlen(charset);
	j = 0;
	i = 0;
	while (str[index + i] && i < len)
	{
		if (str[index + i] == charset[i])
			j++;
		else
			return (0);
		i++;
	}
	if (len == j)
		return (1);
	else
		return (0);
}



char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	char	*arr;
	int		index;
	int		index2;
	int		index3;

	split_str = (char **)malloc(1000);
	arr = (char *)malloc(100);
	index = 0;
	index2 = 0;
	index3 = 0;
	while (str[index2])
	{
		if (is_charset(str, charset, index2))
		{
			split_str[index++] = arr;
			index2 += ft_strlen(charset);
			index3 = 0;
		}
		else
			arr[index3++] = str[index2++];
	}
	if (index == 0)
		split_str[index++] = arr;
	split_str[index] = 0;
	return (split_str);
}
