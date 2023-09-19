/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:33:14 by yaolivei          #+#    #+#             */
/*   Updated: 2023/09/14 21:06:18 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int		a;
	char	*p;

	p = s;
	a = 0;
	while (a < n)
	{
		p[a] = '\0';
		a++;
	}
}

/*int	main()
{
	char	*s;
	int		siz;
	unsigned int	i;
	unsigned int	len_s;
	siz = 3;
	s = malloc(siz * sizeof(char));
	
	if(!s)
		return (0);
	len_s = 7;
	i = 0;
	printf("before function:\n");
	while (i < len_s)
	{
		s[i] = 'c';
		printf("%c", s[i]);
		i++;
	}
	ft_bzero(s, siz);
	printf("\nafter function:\n");
	i = 0;
	s[9] = '\0';
	while (i < siz)
	{
		printf("%d", s[i]);
		i++;
	}
	return (0);
}*/
