/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:59:41 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/20 09:56:16 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*temp;
	int		index;

	index = 0;
	len = ft_strlen(src);
	temp = 0;
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			av_cnt;
	int			i;
	t_stock_str	*stock_arr;

	av_cnt = 0;
	i = 0;
	stock_arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock_arr == NULL)
		return (0);
	while (i < ac)
	{
		stock_arr[i].size = ft_strlen(av[i]);
		stock_arr[i].str = av[i];
		stock_arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_arr[i].size = 0;
	stock_arr[i].str = 0;
	stock_arr[i].copy = 0;
	return (stock_arr);
}
