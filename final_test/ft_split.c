/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:58:14 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/24 17:10:10 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32 || c == 0)
		return (1);
	else
		return (0);
}

int	cnt_word(char *str)
{
	int		word;
	int		i;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (is_space(str[i + 1]) == 0 && is_space(str[i]) == 0)
			word++;
		i++;
	}
	return (word);
}

void	ft_strcpy(char *dest, char *src)
{
	int		i;
	i = 0;
	while (is_space(src[i]) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

void	excute_split(char **arr, char *str)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (is_space(str[i]) == 1)
			i++;
		else
		{
			j = 0;
			while (is_space(str[i + j]) == 0)
				j++;
			arr[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_strcpy(arr[word], str + i);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str)
{
	int		cnt;
	char	**result;

	cnt = cnt_word(str);
	result = (char **)malloc(sizeof(char *) * (cnt + 1));
	excute_split(result, str);
	result[cnt] = 0;
	return (result);
}

int	main()
{
	char *str = "nice    to  meet\nm n  you!!";
	char **res = ft_split(str);
	int	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
