/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:12:33 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/22 10:08:40 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (i < length)
	{
		if (f(tab[i]))
			cnt++;
		i++;
	}
	return (cnt);
}
