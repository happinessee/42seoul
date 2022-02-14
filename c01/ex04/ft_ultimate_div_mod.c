/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:54:37 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/07 08:37:19 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp_div;
	int		tmp_mod;

	tmp_div = *a / *b;
	tmp_mod = *a % *b;
	*a = tmp_div;
	*b = tmp_mod;
}
