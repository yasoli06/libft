/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:37:05 by yaolivei          #+#    #+#             */
/*   Updated: 2023/10/06 23:20:14 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// contar las palabras
// contar las letras de cada palabra
// asignar memoria para cada palabra
// asignar memoria para cada letra
// copiar cada letra en cada palabra
// copiar cada palabra en el array
// devolver el array
static size_t	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}
char	**ft_split(char const *s, char c);
