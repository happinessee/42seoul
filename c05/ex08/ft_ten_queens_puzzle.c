/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:13:42 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/14 09:28:20 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	judge(int x, int board[])
{
	int		i;
	int		tmp;

	i = 0;
	while (i < x)
	{
		tmp = board[x] - board[i];
		if (tmp < 0)
			tmp *= -1;
		if (board[x] == board[i] || x - i == tmp)
			return (0);
		i++;
	}
	return (1);
}

void	print_board(int board[])
{
	int		index;
	char	tmp;

	index = 0;
	while (board[index])
	{
		tmp = board[index] + 48;
		write(1, &tmp, 1);
		index++;
	}
	write(1, "\n", 1);
}

void	queen(int x, int *cnt, int board[])
{
	int		i;

	i = 0;
	if (x == 10)
	{
		*cnt = *cnt + 1;
		print_board(board);
		write(1, "i_find_it!", 9);
		return ;
	}
	while (i < 10)
	{
		board[x] = i;
		if (judge(x, board))
			write(1, "next!", 5);
			queen(x + 1, cnt, board);
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		cnt;
	int		index;
	int		board[10];

	cnt = 0;
	index = 0;
	while (index < 10)
		board[index] = 0;
	write(1, "go!", 3);
	queen(0, &cnt, board);
	return (cnt);
}
