/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:56:22 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *stradd, int c)
{
	int		i;
	char	*str;

	str = (char *)stradd;
	i = ft_strlen(str);
	if ((char)c == 0)
		return (&str[i]);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

// int main()
// {
//     char str[] = "Koiol";
//     char c = 'o';
//     printf("%s\n", ft_strrchr(str, c));
//     printf("%s", strrchr(str, c));
//     return(0);
// }
