/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:06:11 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/14 15:35:00 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		write(1, &str[index++], 1);
	write(1, "\n", 1);
}

void	ft_swap(char *str1, char *str2)
{
	char	*tmp;

	tmp = str1;
	str1 = str2;
	str2 = tmp;
}

void	ft_sort_check(char *str1, char *str2)
{
	int		cnt;

	cnt = 0;
	while (str1[cnt] && str2[cnt])
	{
		if (str1[cnt] > str2[cnt])
			return (1);
		else if (str1[cnt] == str2[cnt])
			cnt ++;
		else
			return (0);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{

