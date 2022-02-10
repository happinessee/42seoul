/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 08:38:38 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/09 11:42:08 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check(char wrd, int *flag)
{
	if (wrd >= 48 && wrd <= 57)
		*flag = 0;
	else if ((wrd >= 65 && wrd <= 90) || (wrd >= 97 && wrd <= 122))
		*flag = 0;
	else
		*flag = 1;
}

char	*ft_strcapitalize(char *str)
{
	int		cnt;
	int		flag;

	cnt = 0;
	flag = 1;
	while (str[cnt])
	{
		if (flag == 1 && str[cnt] >= 97 && str[cnt] <= 122)
			str[cnt] = str[cnt] - 32;
		else if (flag == 0 && str[cnt] >= 65 && str[cnt] <= 90)
			str[cnt] = str[cnt] + 32;
		ft_check(str[cnt], &flag);
		cnt++;
	}
	return (str);
}
