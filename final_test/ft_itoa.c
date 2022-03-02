/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:35:00 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/24 13:57:23 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_rev_arr(char *str)
{
	int		len;
	char	tmp;
	int		index;

	len = 0;
	index = 0;
	while (str[len])
		len++;
	while (index < len / 2)
	{
		tmp = str[index];
		str[index] = str[len - index - 1];
		str[len - index - 1] = tmp;
		index++;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		num;
	char	*str;
	int		minus;
	int		index;

	index = 0;
	if (n == -2147483648)
		return ("-2147483648");
	num = n;
	len = 0;
	while (num)
	{
		num = num / 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 2));
	if (n < 0)
		minus = 1;
	else
		minus = 0;
	while (index < len)
	{
		str[index++] = n % 10 + '0';
		n = n / 10;
	}
	if (minus == 1)
		str[index++] = '-';
	str[index] = '\0';
	ft_rev_arr(str);
	return (str);
}

int	main()
{
	int nb = -2147483648;
	int nb1 = 11485728;
	int nb2 = 903847;
	
	char *arr = ft_itoa(nb);
	char *arr2 = ft_itoa(nb1);
	char *arr3 = ft_itoa(nb2);

	int		i = 0;
	while (arr[i])
	{
		write(1, &arr[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	while (arr2[i])
	{
		write(1, &arr2[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;	
	while (arr3[i])
	{
		write(1, &arr3[i], 1);
		i++;
	}
	return (0);
}
