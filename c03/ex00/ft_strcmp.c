/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:30:58 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/09 17:16:43 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		cnt;

	cnt = 0;
	while (s1[cnt] && s2[cnt])
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt++;
	}
	return (s1[cnt] - s2[cnt]);
}
