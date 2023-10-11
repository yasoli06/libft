/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 01:41:56 by yaolivei          #+#    #+#             */
/*   Updated: 2023/10/06 21:49:59 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//hola que tal\0
//hola que mu\0
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char)s1;
	b = (unsigned char)s2;
	i = 0;
	while (i < n && a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	if (i < n && a[i] != b[i])
	{
		return (a[i] - b[i]);
	}
	return (0);
}

/*int main() {
   char str1[15];
   char str2[15];
   int ret;
   
   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");
   
   ret = strncmp(str1, str2, 4);
   
   if (ret < 0) {
      printf("str1 is less than str2");
   } else if (ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return 0;
}*/
