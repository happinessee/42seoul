/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:01:29 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/03 17:24:40 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchars(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = (a / 10) + 48;
	a2 = (a % 10) + 48;
	b1 = (b / 10) + 48;
	b2 = (b % 10) + 48;
	ft_putchar(a1);
	ft_putchar(a2);
	ft_putchar(' ');
	ft_putchar(b1);
	ft_putchar(b2);
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchars(a, b);
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
