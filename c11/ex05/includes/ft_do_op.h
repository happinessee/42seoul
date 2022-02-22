/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:37:31 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/22 10:33:20 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

int		is_space(char str);
int		is_digit(char str);
int		ft_atoi(char *str);
int		add(int x, int y);
int		sub(int x, int y);
int		mul(int x, int y);
int		div(int x, int y);
int		mod(int x, int y);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
