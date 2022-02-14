/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:48:54 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/14 10:55:50 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		len_argv;
	int		index;

	(void)argc;
	index = 0;
	len_argv = 0;
	while (argv[0][len_argv])
		len_argv++;
	while (index < len_argv)
		write(1, &argv[0][index++], 1);
	write(1, "\n", 1);
}
