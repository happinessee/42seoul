/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:32:28 by hyojeong          #+#    #+#             */
/*   Updated: 2022/02/09 19:40:52 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		len_dest;
	int		cnt;

	cnt = 0;
	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[cnt])
	{
		dest[len_dest + cnt] = src[cnt];
		cnt++;
	}
	dest[len_dest + cnt] = '\0';
	return (dest);
}
