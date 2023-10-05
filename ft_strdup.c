/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:57:58 by yaolivei          #+#    #+#             */
/*   Updated: 2023/10/05 23:48:20 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	j = ft_strlen(s1);
	*ptr = (char *)malloc(sizeof(char) * (j + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < j)
	{
		ptr[i] = s1[i];
		i++;
	}
	return (*ptr);
}
