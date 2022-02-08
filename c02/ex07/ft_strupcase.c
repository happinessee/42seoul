/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:22:12 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/08 17:35:32 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] >= 97 && str[cnt] <= 122)
			str[cnt] = str[cnt] - 32;
		cnt++;
	}
	return (str);
}
