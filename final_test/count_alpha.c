/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:23:14 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/24 20:33:52 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

# define LETTER_COUNT 26
# define NOT_COUNTED_YET -1
# define CASE_OFFSET 0x20

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
int	ft_count_alpha_count(char *str, char target)
{
	int		cnt;
	char	current;

	cnt = 0;
	while ((current = *str))
	{
		if (ft_is_uppercase(current))
			current += CASE_OFFSET;
		if (target == current)
			cnt++;
		str++;
	}
	return (cnt);
}

void	ft_count_alpha_print(int occurences[LETTER_COUNT + 1], char order[LETTER_COUNT + 1])
{
	int		index;
	int		size;

	size = 0;
	while (order[size] != 0)
		size++;
	index = 0;
	while (index < size)
	{
		printf("%d%c", occurences[order[index] - 'a'], order[index]);
		if (index != size - 1)
			printf(", ");
		index++;
	}
}

char	ft_count_alpha_validate(char c, int occurences[LETTER_COUNT + 1])
{
	if (!ft_is_uppercase(c) && !((c >= 'a' && c <= 'z')))
		return (0);
	if (ft_is_uppercase(c))
		c += CASE_OFFSET;
	if (occurences[(int)c - 'a'] != NOT_COUNTED_YET)
		return (0);
	return (c);
}

void	ft_count_alpha(char *str)
{
	int		index;
	int		occurences[LETTER_COUNT + 1];
	char	occurences_order[LETTER_COUNT + 1];
	char	current;

	index = 0;
	while (index < LETTER_COUNT + 1)
	{
		occurences[index] = NOT_COUNTED_YET;
		occurences_order[index] = 0;
		index++;
	}
	index = 0;
	while (*str)
	{
		current = ft_count_alpha_validate(*str, occurences);
		if (current != 0)
		{
			occurences[(int)current - 'a'] = ft_count_alpha_count(str, current);
			occurences_order[index] = current;
			index++;
		}
		str++;
	}
	ft_count_alpha_print(occurences, occurences_order);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_count_alpha(av[1]);
	printf("\n");
}
