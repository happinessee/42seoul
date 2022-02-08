/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:03:34 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/08 13:03:54 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(char word)
{
	char	word1;
	char	word2;

	word1 = (word / 16) + '0';
	word2 = word % 16;
	if (word2 >= 10)
		word2 = (word2 % 10) + 'a';
	else
		word2 = word2 + '0';
	write(1, "\\", 1);
	write(1, &word1, 1);
	write(1, &word2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
	{
		if ((str[cnt] >= 0 && str[cnt] <= 31) || str[cnt] >= 127)
			hexa(str[cnt]);
		else
			write(1, &str[cnt], 1);
		cnt++;
	}
}
