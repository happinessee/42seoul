/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:34:04 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/13 16:34:39 by hyojeong         ###   ########.fr       */
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
