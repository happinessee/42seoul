/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:06:11 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/14 18:03:22 by hyojeong         ###   ########.fr       */
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

void	ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int		cnt;

	cnt = 0;
	while (s1[cnt] && s2[cnt])
	{
		if (s1[cnt] != s2[cnt])
		{
			if (s1[cnt] > s2[cnt])
				return (1);
			else
				return (0);
		}
		cnt++;
	}
	if (s1[cnt] > s2[cnt])
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int		cnt;
	int		cnt2;
	int		index;

	index = 1;
	cnt = 1;
	cnt2 = 1;
	if (argc > 1)
	{
		while (cnt < argc)
		{
			while (cnt2 < argc - 1)
			{
				if (ft_strcmp(argv[cnt2], argv[cnt2 + 1]))
					ft_swap(&argv[cnt2], &argv[cnt2 + 1]);
				cnt2 ++;
			}
			cnt2 = 1;
			cnt ++;
		}
		while (index < argc)
			ft_print(argv[index++]);
	}
}
