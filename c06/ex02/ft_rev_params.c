/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:41:07 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/14 15:04:22 by hyojeong         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int		len;
	int		index;

	len = 1;
	if (argc > 1)
	{
		while (argv[len])
			len++;
		while (argv[--len] && len > 0)
			ft_print(argv[len]);
	}
	return (0);
}
