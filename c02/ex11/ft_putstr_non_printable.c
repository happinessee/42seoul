/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:03:34 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/09 11:41:23 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(char word)
{
	char	buf[3];
	char	*hex;

	hex = "0123456789abcdef";
	buf[0] = '\\';
	buf[1] = hex[word / 16];
	buf[2] = hex[word % 16];
	write(1, buf, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
	{
		if ((str[cnt] >= 0 && str[cnt] <= 31) || str[cnt] == 127)
			hexa(str[cnt]);
		else
		if (str[cnt] >= 32 && str[cnt] <= 126)
			write(1, &str[cnt], 1);
		else
			hexa(str[cnt]);
		cnt++;
	}
}
