/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:34:18 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/21 16:36:04 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int	get_tabs(char **tab)
{
	int		cnt;

	cnt = 0;
	while (tab[cnt])
		cnt++;
	return (cnt);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
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
				if (cmp(tab[j], tab[j + 1]) > 0)
					ft_swap(&tab[j], &tab[j + 1]);
				j++;
			}
			j = 0;
			i++;
		}
	}
}
