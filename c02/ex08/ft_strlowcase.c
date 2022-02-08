/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:51:40 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/08 16:41:06 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] >= 65 && str[cnt] <= 90)
			str[cnt] = str[cnt] + 32;
		cnt++;
	}
	return (str);
}
