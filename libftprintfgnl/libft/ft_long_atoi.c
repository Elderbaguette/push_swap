/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:43:31 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_long_atoi(const char *str)
{
	long	i;
	long	j;
	long	l;

	i = 0;
	j = 0;
	l = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		l = l * 10 + str[i] - '0';
		i++;
	}
	if (j == 1)
		return (-l);
	return (l);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		// printf("%d\n", ft_atoi(argv[1]));
// 		printf("%li\n", ft_long_atoi(argv[1]));
// 		return(0);
// 	}
// }
