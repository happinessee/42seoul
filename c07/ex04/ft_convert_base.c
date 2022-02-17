/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:01 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/17 13:21:35 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_base(char *base);
int		is_space(char word);
int		get_len(char *str);
int		change_str_int(char str, char *base);
char	*change_int_str(int digit, char *base, int minus);

int	x_to_10(int len, char *nb)
{
	int		result;
	int		index;

	result = 0;
	index = 0;
	while (nb[index])
	{
		result = result * len;
		result = result + nb[index] - 48;
		index ++;
	}
	return (result);
}

int	is_nbr(char nb, char *base_from)
{
	int		index;

	index = 0;
	while (base_from[index])
	{
		if (nb == base_from[index])
			return (1);
		index ++;
	}
	return (0);
}

void	pass_init(char *nbr, int *index, int *minus)
{
	while (nbr[*index] && is_space(nbr[*index]))
		*index = *index + 1;
	while (nbr[*index] == '+' || nbr[*index] == '-')
	{
		if (nbr[*index] == '-')
			*minus *= -1;
		*index = *index + 1;
	}
}

void	rev_arr(char *str)
{
	int		len;
	int		index;
	int		tmp;

	len = get_len(str);
	index = 0;
	while (index < len / 2)
	{
		tmp = str[index];
		str[index] = str[len - index - 1];
		str[len - index - 1] = tmp;
		index ++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*arr;
	int		index;
	int		cnt;
	int		minus;
	int		result;

	index = 0;
	minus = 1;
	cnt = 0;
	arr = 0;
	if (check_base(base_from) || check_base(base_to))
		return (0);
	arr = (char *)malloc(40 * sizeof(char));
	pass_init(nbr, &index, &minus);
	while (is_nbr(nbr[index], base_from))
	{
		arr[cnt++] = change_str_int(nbr[index], base_from) + 48;
		index ++;
	}
	arr[cnt] = '\0';
	result = x_to_10(get_len(base_from), arr);
	free(arr);
	arr = change_int_str(result, base_to, minus);
	rev_arr(arr);
	return (arr);
}
