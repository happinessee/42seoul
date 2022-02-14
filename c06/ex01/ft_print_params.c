/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:03:25 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/14 14:43:37 by hyojeong         ###   ########.fr       */
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

int	main(int argc, char**argv)
{
	int		index;

	index = 1;
	if (argc > 1)
	{
		while (argv[index])
		{
			ft_print(argv[index]);
			index++;
		}
	}
	return (0);
}
