/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:33:42 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/10 10:00:08 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *find)
{
	int		cnt;
	int		fcnt;
	int		len_to_find;

	len_to_find = 0;
	fcnt = 0;
	cnt = 0;
	if (find[0] == '\0')
		return (str);
	while (find[len_to_find])
		len_to_find++;
	while (str[cnt])
	{
		fcnt = 0;
		while (find[fcnt] && str[cnt + fcnt] && str[cnt + fcnt] == find[fcnt])
		{
			fcnt++;
		}
		if (len_to_find == fcnt)
			return (&str[cnt]);
		cnt++;
	}
	return (0);
}
