/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:57:57 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_tod(unsigned int d, char *c)
// {
// 	(void)d;
//     if (*c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// int main()
// {
// 	char str[] = "Je suis pablo";
// 	ft_striteri(str, ft_tod);
// 	printf("%s", str);
// }
