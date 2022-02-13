/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:09:06 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/13 16:40:12 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		check;
	int		cnt;

	cnt = 0;
	check = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (check * check < nb + 1)
	{
		if (nb % check == 0)
			return (0);
		check++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		prime;

	prime = nb;
	if (prime <= 2)
		return (2);
	else if (prime == 3)
		return (3);
	while (1)
	{
		if (prime % 2 == 0 || prime % 3 == 0)
			prime++;
		else if (ft_is_prime(prime))
			return (prime);
		else
			prime++;
	}
}
