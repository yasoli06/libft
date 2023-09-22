/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:45:50 by yaolivei          #+#    #+#             */
/*   Updated: 2023/09/19 17:33:44 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
	return(0);
	if (d < s)
		while (len-- > 0)
			{
				d[len] = s[len];
			}
	else 
		while (i < len)
		{
			d[i] = s[i];
			i++;	
		}
	return (dst);
}