/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:52:59 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/24 18:59:46 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_printhex(int n)
{
	char	c;

	if (n >= 16)
		ft_printhex(n / 16);
	if (n >= 10)
		c = n % 16 + 'a' - 10;
	else
		c = n % 16 + '0';
	write(1, &c, 1);
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char	*t;
	size_t			i;
	int				col;
	size_t			tmp;

	t = (unsigned char *)addr;
	i = 0;
	tmp = 0;
	while (i < size)
	{
		col = -1;
		tmp = i;
		while (++col < 16)
		{
			if (i < size)
			{
				if (t[i] < 16)
					ft_putchar('0');
				ft_printhex(t[i]);
			}
			else
				ft_putstr(" ");
			ft_putchar((i++ & 1) << 6);
		}
		col = -1;
		i = tmp;
		while (++col < 16 && i < size)
			ft_printchars(t[i++]);
		ft_putchar('\n');
	}
}

