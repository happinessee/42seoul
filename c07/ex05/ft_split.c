/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:25:33 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/17 16:01:16 by hyojeong         ###   ########.fr       */
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

void	ft_malloc(char **str)
{
	int		index;

	index = 0;
	while (index < 1000)
		str[index++] = (char *)malloc(1000);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	int		index1;
	int		index2;
	int		index3;

	index1 = 0;
	index2 = 0;
	index3 = 0;
	split_str = (char **)malloc(1000);
	ft_malloc(split_str);
	while (str[index1])
	{
		if (is_charset(str, charset, index1))
		{
			split_str[index2][index3] = 0;
			index2++;
			index3 = 0;
			index1 += ft_strlen(charset);
		}
		else
			split_str[index2][index3++] = str[index1++];
	}
	split_str[index2][index3] = 0;
	split_str[index2 + 1] = 0;
	return (split_str);
}
