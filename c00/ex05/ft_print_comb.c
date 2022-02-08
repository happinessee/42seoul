/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:28:09 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/06 16:58:29 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar3(char c[])
{
	write(1, c, 3);
	if (c[0] == '7' && c[1] == '8' && c[2] == '9')
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	c[3];

	c[0] = '0';
	c[1] = '1';
	c[2] = '2';
	while (c[0] <= '7')
	{
		while (c[1] <= '8')
		{
			while (c[2] <= '9')
			{
				if (c[0] != c[1] && c[1] != c[2] && c[2] != c[0])
					ft_putchar3(c);
				c[2]++;
			}
			c[1]++;
			c[2] = c[1] + 1;
		}
		c[0]++;
		c[1] = c[0] + 1;
		c[2] = c[1] + 1;
	}
}
