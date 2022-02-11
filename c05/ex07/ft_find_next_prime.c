/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:09:06 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/12 07:42:21 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime (int nb)
{
	int		check;
	int		cnt;

	cnt = 0;
	check = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (check != nb)
	{
		if (nb % check == 0)
			cnt++;
		check++;
	}
	if (cnt == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	long long	next_prime;

	next_prime = nb;
	while (1)
	{
		if (is_prime(next_prime))
		{
			return (next_prime);
		}
		next_prime++;
	}
}
