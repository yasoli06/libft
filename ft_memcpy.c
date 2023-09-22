/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:26:13 by yaolivei          #+#    #+#             */
/*   Updated: 2023/09/22 15:12:29 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_c;
	char	*src_c;

	i = 0;
	dst_c = dst;
	src_c = src;
	while (i < n)
	{
		dst_c[i] = src_c[i];
		i++;
	}
}
