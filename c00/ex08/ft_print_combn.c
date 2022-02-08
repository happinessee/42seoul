/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:42:13 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/06 16:42:23 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	if (c == ',')
		write(1, " ", 1);
}

int	is_final(char c[], int n)
{
	int	idx;

	if (n == 1)
	{
		if (c[0] == '9')
			return (1);
		return (0);
	}
	idx = n - 1;
	if (c[idx] != '9')
		return (0);
	idx -= 1;
	while (idx >= 0)
	{
		if (c[idx] + 1 != c[idx + 1])
			return (0);
		idx--;
	}
	return (1);
}

void	ft_printall(char c[], int n)
{
	int	cnt;

	cnt = 0;
	while (cnt < n)
		ft_putchar(c[cnt++]);
	if (!is_final(c, n))
		ft_putchar(',');
}

void	ft_calcall(char c[], int n)
{
	int		cnt;
	int		value;
	int		flag;

	flag = 0;
	cnt = n;
	while (cnt >= 2)
	{
		if (c[cnt - 1] > '0' + 8 - (n - cnt))
		{
			flag = 1;
			c[cnt - 2]++;
			value = cnt - 1;
			while (value <= n)
			{
				c[value] = c[value - 1] + 1;
				value++;
			}
			if (c[n - 1] == '9' && c[n - 2] == '8' && !is_final(c, n))
				ft_printall(c, n);
		}
		cnt--;
	}
	if (flag == 0)
		c[n - 1]++;
}

void	ft_print_combn(int n)
{
	char	c[10];
	int		index;

	index = 0;
	while (index <= 8)
	{
		c[index] = '0' + index;
		index++;
	}	
	while (c[0] <= '0' + 10 - n)
	{
		if (is_final(c, n))
		{
			ft_printall(c, n);
			return ;
		}
		else
		{
			ft_printall(c, n);
			ft_calcall(c, n);
		}
	}
}
