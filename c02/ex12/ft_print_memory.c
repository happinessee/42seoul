/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:03:53 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/08 16:10:58 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(char c)
{
	char	word1;
	char	word2;

	word1 = (word / 16) + '0';
	word2 = word % 16;
	if (word2 >= 10)
		word2 = (word2 % 10) + 'a';
	else
		word2 = word2 + '0';
	write(1, &word1, 1);
	write(1, &word2, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		cnt;

	cnt = 0;
	while (addr[cnt] && cnt < 16)
	{
		cnt++;
	}
}		
