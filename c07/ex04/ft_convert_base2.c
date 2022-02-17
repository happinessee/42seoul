/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:08:36 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/17 13:21:39 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char word);

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
	while (1)
	{
		if (base[index] == str)
			return (index);
		index++;
	}
	return (0);
}

char	*change_int_str(int digit, char *base, int minus)
{
	int		index;
	int		len_base;
	char	*arr;

	index = 0;
	len_base = get_len(base);
	arr = (char *)malloc(40 * sizeof(char));
	if (digit == 0)
	{
		arr[index++] = base[digit % len_base];
		arr[index] = 0;
		return (arr);
	}
	while (digit > 0)
	{
		arr[index++] = base[digit % len_base];
		digit = digit / len_base;
	}
	if (minus == -1)
		arr[index++] = '-';
	arr[index] = 0;
	return (arr);
}
