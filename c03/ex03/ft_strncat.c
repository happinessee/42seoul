/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:42:16 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/10 09:06:32 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt;
	int				len_dest;

	len_dest = 0;
	cnt = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[cnt] && cnt < nb)
	{
		dest[len_dest + cnt] = src[cnt];
		cnt++;
	}
	dest[len_dest + cnt] = '\0';
	return (dest);
}
