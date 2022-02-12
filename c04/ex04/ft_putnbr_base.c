/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:35:57 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/12 20:00:33 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int		cnt;
	int		cnt2;

	cnt = 0;
	while (base[cnt])
	{
		if (base[cnt] == '-' || base[cnt] == '+')
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
	if (cnt == 0 || cnt == 1)
		return (1);
	else
		return (0);
}

long long	change_minus(long long nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	return (nb);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nb;
	int			len_base;
	int			index;
	char		room[1000];

	nb = (long long)nbr;
	index = 0;
	len_base = 0;
	if (check_base(base))
		return ;
	while (base[len_base])
		len_base++;
	nb = change_minus(nb);
	if (nb == 0)
		room[index++] = base[nb % len_base];
	while (nb > 0)
	{
		room[index++] = base[nb % len_base];
		nb = nb / len_base;
	}
	while (index != 0)
		write(1, &room[--index], 1);
}
