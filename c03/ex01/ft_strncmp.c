/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:48:13 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/10 09:17:26 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	if (n == 0)
		return (0);
	while (s1[cnt] && s2[cnt] && cnt < n)
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt++;
	}
	if (s1[cnt] == s2[cnt])
		return (0);
	else
		return (s1[cnt] - s2[cnt]);
}
