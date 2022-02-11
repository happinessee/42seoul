/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:26:23 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/10 21:53:07 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char str)
{
	if ((str >= 9 && str <= 13) || str == 32)
		return (1);
	else
		return (0);
}

int	is_base(char str, char *base)
{
	int		cnt;
	int		len_base;

	cnt = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	while (cnt < len_base)
	{
		if (str == base[cnt])
			return (1);
		cnt++;
	}
	return (0);
}

int	check_base(char *base)
{
	int		cnt;
	int		cnt2;

	cnt = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[cnt])
	{
		if (base[cnt] == '-' || base[cnt] == '+' || base[cnt] == 32)
			return (1);
		cnt2 = cnt + 1;
		while (base[cnt2])
		{
			if (base[cnt] == base[cnt2])
				return (1);
			cnt2++;
		}
		cnt++;
	}
	return (0);
}

int	change_str_int(char str, char *base)
{
	int		index;
	int		len_base;

	index = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	while (len_base != 0)
	{
		if (base[index] == str)
		{
			return (index);
		}
		len_base--;
		index++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		cnt;
	int		cnt_minus;
	int		result;
	int		base_len;

	base_len = 0;
	result = 0;
	cnt = 0;
	cnt_minus = 1;
	if (check_base(base))
		return (0);
	while (base[base_len])
		base_len++;
	while (str[cnt] == '+' || str[cnt] == '-' || is_space(str[cnt]))
	{
		if (str[cnt] == '-')
			cnt_minus *= -1;
		cnt++;
	}
	while (is_base(str[cnt], base))
	{
		result = result * base_len;
		result += change_str_int(str[cnt++], base);
	}
	return (result * cnt_minus);
}
