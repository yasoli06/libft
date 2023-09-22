/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:45:50 by yaolivei          #+#    #+#             */
/*   Updated: 2023/09/22 16:16:38 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			(unsigned char *)dst = (unsigned char *)src;
			i++;
		}
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