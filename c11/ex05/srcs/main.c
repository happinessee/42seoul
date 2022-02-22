/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:27:14 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/22 09:06:49 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	calc(int num1, int num2, char operator)
{
	int		result;

	result = 0;
	if (operator == '+')
		result = add(num1, num2);
	else if (operator == '-')
		result = sub(num1, num2);
	else if (operator == '*')
		result = mul(num1, num2);
	else if (operator == '/')
	{
		if (num2 == 0)
			return (-1);
		result = div(num1, num2);
	}
	else if (operator == '%')
	{
		if (num2 == 0)
			return (-2);
		result = mod(num1, num2);
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int		num1;
	int		num2;
	char	operator;
	int		result;

	if (argc == 4)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		operator = argv[2][0];
		if (ft_strlen(argv[2]) != 1)
			write(1, "0\n", 2);
		else
		{
			result = calc(num1, num2, operator);
			if (result == -1)
				ft_putstr("Stop : division by zero\n");
			else if (result == -2)
				ft_putstr("Stop : modulo by zero\n");
			else
			{
				ft_putnbr(result);
				ft_putchar('\n');
			}
		}
	}
	return (0);
}
