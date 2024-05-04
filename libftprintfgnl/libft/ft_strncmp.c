/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:45:10 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	if (length == 0)
		return (0);
	i = 0;
	while (first[i] && second[i] && first[i] == second[i] && i < length - 1)
		i++;
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}

// int main()
// {
//     char first[] = "Koiol";
//     char second[] = "Koio";

//     printf("%d\n", ft_strncmp(first, second, 0));
//     printf("%d", strncmp(first, second, 0));
//     return(0);
// }
