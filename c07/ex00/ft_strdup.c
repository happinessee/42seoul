/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:09:47 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/15 15:23:50 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*temp;

	len = 0;
	while (src[len])
		len ++;
	temp = (char *)malloc(len * sizeof(char));
	if (temp == 0)
		return (temp);
	temp = src;
	return (temp);
}
