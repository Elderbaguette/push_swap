/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:06:17 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (source[i] && i < size - 1)
		{
			destination[i] = source[i];
			i++;
		}
		destination[i] = '\0';
	}
	return (ft_strlen(source));
}

// int main(void)
// {
// 	char source1[] = "12345";
// 	char destination1[5];

// 	ft_strlcpy(destination1, source1, 2);
// 	printf("\nFausse fonction :\n%s\n", source1);
// 	printf("%s", destination1);
// }
