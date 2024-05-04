/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:36:46 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define D ("0123456789")
# define LX ("0123456789abcdef")
# define BX ("0123456789ABCDEF")

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		pc(char c);
int		pn(int n, int *count);
int		ps(char *s);
int		pu(unsigned long int n, char *base, int *count);
size_t	ft_strle(const char *str);
int		ft_printf(const char *formats, ...);

#endif
