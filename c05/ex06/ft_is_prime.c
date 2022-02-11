/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:34:04 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/12 01:08:34 by hyojeong         ###   ########.fr       */
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
