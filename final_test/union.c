/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:14:44 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/24 11:45:52 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	arr[1024];
	int		i;
	int		j;
	int		arr_index;
	int		flag;

	i = 0;
	j = 0;
	arr_index = 0;
	flag = 0;
	while (i < 1024)
		arr[i++] = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			arr_index = 0;
			while (arr[arr_index])
			{
				if (argv[1][i] == arr[arr_index])
					flag = 1;
				arr_index++;
			}
			if (flag != 1)
			{
				arr[j] = argv[1][i];
				j++;
				i++;
			}
			else
			{
				i++;
				flag = 0;
			}
		}
		i = 0;
		while (argv[2][i])
		{
			arr_index = 0;
			while (arr[arr_index])
			{
				if (argv[2][i] == arr[arr_index])
					flag = 1;
				arr_index++;
			}
			if (flag != 1)
			{
				arr[j] = argv[2][i];
				j++;
				i++;
			}
			else
			{
				i++;
				flag = 0;
			}
		}
		i = 0;
		while (arr[i])
		{
			write(1, &arr[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

