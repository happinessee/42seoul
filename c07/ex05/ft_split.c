/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:25:33 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/17 14:36:36 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	main(void)
	{
		printf("----ex05----\n");
		char **str_arr;
		int i;
		str_arr = ft_split("Hello World Cat\tDog\nPizza School"," \n");
		for(i=0;str_arr[i] != 0; i++)
			printf("%s\n",str_arr[i]);
		for(i=0;str_arr[i] != 0; i++)
			free(str_arr[i]);
		free(str_arr);	
		str_arr = ft_split("Hello World Cat\tDog\nPizza School"," World");
		for(i=0;str_arr[i] != 0; i++)
			printf("%s\n",str_arr[i]);
		for(i=0;str_arr[i] != 0; i++)
			free(str_arr[i]);
		free(str_arr);

	}
