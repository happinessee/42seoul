/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:52:58 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/10 15:40:23 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char str)
{
	if ((str >= 9 && str <= 13) || str == 32)
		return (1);
	else
		return (0);
}

int	is_digit(char str)
{
	if (str >= 48 && str <= 57)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		cnt;
	int		cnt_minus;
	int		result;

	result = 0;
	cnt = 0;
	cnt_minus = 1;
	while (str[cnt] && is_space(str[cnt]))
		cnt++;
	while (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			cnt_minus *= -1;
		cnt++;
	}
	while (is_digit(str[cnt]))
	{
		result = result * 10;
		result += str[cnt] - 48;
		cnt++;
	}
	return (result * cnt_minus);
}
