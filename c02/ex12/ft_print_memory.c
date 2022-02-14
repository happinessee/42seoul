/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:03:53 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/09 16:31:46 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(unsigned char word)
{
	char	buf[2];
	char	*hex;

	hex = "0123456789abcdef";
	buf[0] = hex[word / 16];
	buf[1] = hex[word % 16];
	write(1, buf, 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int					cnt;
	int					index;
	unsigned long long	*address;
	int					len_add;

	if (size == 0)
		return (addr);
	address = (unsigned long long *)addr;
	cnt = 0;
	while (address[cnt])
		cnt++;
	while (cnt / 16)
	{
		index = 0;
		while (index < 16)
		{
			write(1, &address[index], 1);
			index++;
		}
		write(1, ": ", 2);
		hexa(address[cnt]);
		cnt -= 16;
	}
	return (addr);
}
