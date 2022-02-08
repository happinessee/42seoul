/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:02:07 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/08 16:08:18 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt])
	{
		if (str[cnt] >= 65 && str[cnt] <= 90)
			cnt++;
		else if (str[cnt] >= 97 && str[cnt] <= 122)
			cnt++;
		else
			return (0);
	}
	return (1);
}
