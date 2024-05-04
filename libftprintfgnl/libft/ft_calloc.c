/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:28:41 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elemCount, size_t elementSize)
{
	void	*tab;
	char	*array;
	size_t	i;

	i = 0;
	tab = NULL;
	if (elemCount * elementSize == 0 || elemCount <= SIZE_MAX / elementSize)
		tab = (void *)malloc(elemCount * elementSize);
	if (!tab)
		return (NULL);
	array = (char *) tab;
	while (i < elemCount * elementSize)
	{
		array[i] = 0;
		i++;
	}
	return (tab);
}
