/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:13:42 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/13 21:58:44 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	judge(int x, char *board)
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

int	queen(int x, int *cnt)
{
	if (x == 10)
	{


int	ft_ten_queens_puzzle(void)
{
	int		cnt;

	cnt = 0;
	return(0);
}
