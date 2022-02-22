/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:55:32 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/22 10:32:35 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_ascend(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	is_descend(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (is_ascend(tab, length, f) || is_descend(tab, length, f))
		return (1);
	else
		return (0);
}
