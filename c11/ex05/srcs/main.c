/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:27:14 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/22 10:39:56 by hyojeong         ###   ########.fr       */
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

	if (argc == 4)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		operator = argv[2][0];
		if (ft_strlen(argv[2]) != 1)
			ft_putstr("0\n");
		else
		{
			if (calc(num1, num2, operator) == -1)
				ft_putstr("Stop : division by zero\n");
			else if (calc(num1, num2, operator) == -2)
				ft_putstr("Stop : modulo by zero\n");
			else
			{
				ft_putnbr(calc(num1, num2, operator));
				ft_putchar('\n');
			}
		}
	}
	return (0);
}
