/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:13:47 by yaolivei          #+#    #+#             */
/*   Updated: 2023/09/13 18:12:02 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'z') || (c <= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf ("%d", ft_isalnum('a'));
// 	return (0);
//}