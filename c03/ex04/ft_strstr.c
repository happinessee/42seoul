/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:33:42 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/09 21:52:01 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		cnt;
	int		find_cnt;
	int		len_to_find;

	len_to_find = 0;
	find_cnt = 0;
	cnt = 0;
	if (to_find[0] == '\0')
		return (str);
	while (find_cnt[len_to_find])
		len_to_find++;
	while(str[cnt])
	{
		if (str[cnt + find_cnt] == to_find[find_cnt])
			find_cnt++;
		else
			cnt++;
		if (len_to_find == find_cnt)
			return (&str[cnt]);
	}
	return (0);
}
