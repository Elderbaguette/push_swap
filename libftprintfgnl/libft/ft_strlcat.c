/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:02:41 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	if (!dest && size == 0)
		return (0);
	a = ft_strlen(dest);
	i = 0;
	if (size <= a)
		return (size + ft_strlen(src));
	while (src[i] && a + 1 < size)
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (ft_strlen(&src[i]) + ft_strlen(dest));
}
// // int main(void)
// // {
// // 	char array1[] = "12345";
// 	char flow[100];
// 	char array2[] = "6789";

// 	(void)flow;
// 	printf("%s\n", array1);
// 	ft_strlcat(array1, array2, 5);
// 	printf("%s", array1);
// }
