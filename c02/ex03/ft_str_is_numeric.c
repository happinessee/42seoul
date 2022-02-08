/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:20:00 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/07 20:26:31 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt])
	{
		if (str[cnt] >= 48 && str[cnt] <= 57)
			cnt++;
		else
			return (0);
	}
	return (1);
}
