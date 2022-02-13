/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:30:13 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/13 16:31:26 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		num;

	num = 1;
	if (nb <= 0)
		return (0);
	while (num * num < nb)
	{
		if (num > 46341)
			return (0);
		num++;
	}
	if (num * num == nb)
		return (num);
	else
		return (0);
}
