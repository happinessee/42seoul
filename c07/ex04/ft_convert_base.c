/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:01 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/17 09:54:36 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_base(char *base);
int		is_space(char word);
int		get_len(char *str);
int		change_str_int(char str, char *base);
char	*change_int_str(int digit, char *base);

int	x_to_10(int len, char *nb)
{
	int		result;
	int		index;

	result = 0;
	index = 0;
	while (nb[index] && index < len)
	{
		result = result * len;
		result = result + nb[index] - 48;
		index ++;
	}
	return (result);
}

int	is_nbr(char nb, char *base_from)
{
	int		index;

	index = 0;
	while (base_from[index])
	{
		if (nb == base_from[index])
			return (1);
		index ++;
	}
	return (0);
}

void	pass_init(char *nbr, int *index, int *minus)
{
	while (nbr[*index] || is_space(nbr[*index]))
		*index = *index + 1;
	while (nbr[*index] == '+' || nbr[*index] == '-')
	{
		if (nbr[*index] == '-')
			*minus *= -1;
		*index = *index + 1;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*arr;
	int		index;
	int		cnt;
	int		minus;
	int		result;

	index = 0;
	minus = 1;
	cnt = 0;
	arr = 0;
	if (check_base(base_from) || check_base(base_to))
		return (0);
	arr = (char *)malloc(40 * sizeof(char));
	pass_init(nbr, &index, &minus);
	while (is_nbr(nbr[index], base_from))
	{
		arr[cnt++] = change_str_int(nbr[index], base_from) + 48;
		index ++;
	}
	result = x_to_10(get_len(base_from), arr);
	free(arr);
	arr = change_int_str(result, base_to);
	return (arr);
}

int	main(void)
{
		printf("----ex04----\n");
		char *str;
		str = ft_convert_base("15858", "012345678", "0123456789ABCDEF");
		printf("2A9B : %s\n", str);
		free(str);
		str = ft_convert_base("  \t \n -+-+-28909abc", "0123456789abcdef", "0123456789ABCDEFGHIJ");
		printf("-ACDADBG : %s\n", str);
		free(str);
		str = ft_convert_base(" --zzixzoz", "ozix", "POIUYTREWQ");
		printf("TWYO : %s\n", str);
		free(str);
		char base[6] = {-19, 66, -1, -8, -20, 0};
		str = ft_convert_base("++858a112", "845a", base);
		printf("B?? : %s\n", str);
		free(str);

		str = ft_convert_base("15858", "01234aa5678", "012345679ABCDEF");
		printf("null : %s\n", str);
		free(str);	
		str = ft_convert_base("15858", "01278", "0");
		printf("null : %s\n", str);
		free(str);	
		str = ft_convert_base("15858", "01-278", "019ABCDEF");
		printf("null : %s\n", str);
		free(str);
}
