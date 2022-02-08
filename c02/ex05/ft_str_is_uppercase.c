/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:27:47 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/08 16:09:12 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt])
	{
		if (str[cnt] >= 65 && str[cnt] <= 90)
			cnt++;
		else
			return (0);
	}
	return (1);
}
