/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:57:37 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charcheck(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char	*str;

	i = 0;
	if (!s1)
		return (NULL);
	j = ft_strlen(s1);
	while (charcheck(s1[i], set) == 1)
		i++;
	while (charcheck(s1[j - 1], set) == 1)
		j--;
	if (j == 0)
		return (ft_calloc(1, 1));
	str = malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	l = -1;
	while (i + ++l < j)
		str[l] = s1[i + l];
	str[l] = '\0';
	return (str);
}

// int main()
// {
// char s1[] = "suis moi et tu es toi";
// char set[] = " ";

// printf("%s", ft_strtrim(s1, set));
// }
