/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:36:30 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     t_list *l1 = ft_lstnew("Pablo");
// 	t_list *l2 = ft_lstnew("DOSSO");
// 	t_list *l3 = ft_lstnew("lO");
// 	void *p = &l1;
// 	ft_lstadd_front(p, l2);
// 	ft_lstadd_front(p, l3);
//     printf("%d\n", ft_lstsize(l1));
//     return 0;
// }
