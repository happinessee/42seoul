/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 08:38:38 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/08 18:15:53 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check(char wrd, int *flag)
{
	if ((wrd >= 32 && wrd <= 47) || (wrd >= 58 && wrd <= 64))
		*flag = 1;
	else if ((wrd >= 91 && wrd <= 96) || (wrd >= 123 && wrd <= 126))
		*flag = 1;
	else
		*flag = 0;
}

char	*ft_strcapitalize(char *str)
{
	int		cnt;
	int		flag;

	cnt = 0;
	flag = 0;
	while (str[cnt])
	{
		if ((cnt == 0 || flag == 1) && str[cnt] >= 97 && str[cnt] <= 122)
			str[cnt] = str[cnt] - 32;
		else if ((cnt != 0 && flag == 0) && str[cnt] >= 65 && str[cnt] <= 90)
			str[cnt] = str[cnt] + 32;
		ft_check(str[cnt], &flag);
		cnt++;
	}
	return (str);
}
