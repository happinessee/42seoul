/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:08:36 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/16 09:05:37 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_base(char *base)
{
	int		cnt;
	int		cnt2;

	cnt = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[cnt])
	{
		if (base[cnt] == '-' || base[cnt] == '+' || is_space(base[cnt]))
			return (1);
		cnt2 = cnt + 1;
		while (base[cnt2])
		{
			if (base[cnt] == base[cnt2])
				return (1);
			cnt2++;
		}
		cnt++;
	}
	return (0);
}

int	is_space(char word)
{
	if ((word >= 9 && word <= 13) || word == 32)
		return (1);
	else
		return (0);
}

int	get_len(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index ++;
	return (index);
}

int	change_str_int(char str, char *base)
{
	int		index;
	int		len_base;

	index = 0;
	len_base = get_len(base);
	while (len_base != 0)
	{
		if (base[index] == str)
		{
			return (index);
		}
		len_base--;
		index++;
	}
	return (0);
}

char	*change_int_str(int digit, char *base)
{
	int		index;
	int		len_base;
	char	*arr;

	index = 0;
	len_base = get_len(base);
	arr = (char *)malloc(32 * sizeof(char));
	if (digit == 0)
	{
		arr[index] = base[digit % len_base];
		return (arr);
	}
	while (digit > 0)
	{
		arr[index++] = base[digit % len_base];
		digit = digit / len_base;
	}
	return (arr);
}