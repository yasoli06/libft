/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:45:50 by yaolivei          #+#    #+#             */
/*   Updated: 2023/09/24 20:35:19 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len-- > 0)
		{
			*d-- = *s--;
		}
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}

/*int main(void)
{
char str1[] = "memmove can be very useful......";
char str2[] = "memmove can be very useful......";

printf("Before memmove dest = %s, src = %s\n", str1, str1 + 4);
ft_memmove(str1, str1 + 4, 10);
return (0);

}*/