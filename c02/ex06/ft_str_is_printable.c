/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:16:54 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/08 16:09:30 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt])
	{
		if (str[cnt] >= 32 && str[cnt] <= 126)
			cnt++;
		else
			return (0);
	}
	return (1);
}
