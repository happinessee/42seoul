/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:52:54 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/10 09:07:29 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	cnt;

	src_len = 0;
	dest_len = 0;
	cnt = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (src_len + size);
	while (src[cnt] && dest_len + cnt + 1 < size)
	{
		dest[dest_len + cnt] = src[cnt];
		cnt++;
	}
	dest[dest_len + cnt] = '\0';
	return (dest_len + src_len);
}
