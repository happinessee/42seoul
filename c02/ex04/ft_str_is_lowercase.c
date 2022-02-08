/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:22:38 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/07 20:26:17 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt])
	{
		if (str[cnt] >= 97 && str[cnt] <= 122)
			cnt++;
		else
			return (0);
	}
	return (1);
}
