/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:09:47 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/16 17:39:59 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*temp;
	int		index;

	index = 0;
	len = 0;
	temp = 0;
	while (src[len])
		len ++;
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (temp == NULL)
		return (0);
	while (src[index])
	{
		temp[index] = src[index];
		index ++;
	}
	temp[index] = '\0';
	return (temp);
}
