/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:14:33 by yaolivei          #+#    #+#             */
/*   Updated: 2023/10/03 15:21:09 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	sign;

	sign = 1;
	a = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		a = a * 10 + *str - '0';
		str++;
	}
	return (a * sign);
}
