/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:25:33 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/18 09:05:38 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*temp;
	int		index;

	index = 0;
	len = 0;
	temp = 0;
	while (src[len])
		len ++;
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (temp == NULL)
		return (0);
	while (src[index])
	{
		temp[index] = src[index];
		index ++;
	}
	temp[index] = '\0';
	return (temp);
}

int	ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

int	is_charset(char *str, char *charset, int *index)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (charset[i])
	{
		if (str[*index] == charset[i])
		{
			*index = *index + 1;
			cnt++;
			i = -1;
		}
		i++;
	}
	if (cnt > 0)
		return (1);
	else
		return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	char	*tmp;
	int		index1;
	int		index2;
	int		index3;

	index1 = 0;
	index2 = 0;
	index3 = 0;
	split_str = (char **)malloc(1000);
	tmp = (char *)malloc(1000);
	while (str[index1])
	{
		if (is_charset(str, charset, &index1))
		{
			tmp[index2] = 0;
			split_str[index3++] = ft_strdup(tmp);
			index2 = 0;
		}
		else
			tmp[index2++] = str[index1++];
	}
	tmp[index2] = 0;
	split_str[index3++] = ft_strdup(tmp);
	split_str[index3] = 0;
	return (split_str);
}
