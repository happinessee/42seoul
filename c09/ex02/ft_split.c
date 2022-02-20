/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:50:46 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/20 17:18:57 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i + 1], charset) == 1
			&& is_charset(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	copy_str(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (is_charset(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	excute_split(char **arr, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_charset(str[i + j], charset) == 0)
				j++;
			arr[word] = (char *)malloc(sizeof(char) * (j + 1));
			copy_str(arr[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		word_count;

	word_count = count_words(str, charset);
	arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	excute_split(arr, str, charset);
	arr[word_count] = 0;
	return (arr);
}
