/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:22:13 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/21 16:32:01 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

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

int	get_tabs(char **tab)
{
	int		cnt;

	cnt = 0;
	while (tab[cnt])
		cnt++;
	return (cnt);
}

void	ft_sort_string_tab(char **tab)
{
	int		argc;
	int		i;
	int		j;
	int		k;

	argc = get_tabs(tab);
	i = 0;
	j = 0;
	k = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			while (j < argc - 1)
			{
				if (ft_strcmp(tab[j], tab[j + 1]) > 0)
					ft_swap(&tab[j], &tab[j + 1]);
				j++;
			}
			j = 0;
			i++;
		}
	}
}
