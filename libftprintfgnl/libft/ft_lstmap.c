/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:21:11 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l1;
	t_list	*l2;

	if (!lst || !f)
		return (NULL);
	l1 = NULL;
	while (lst)
	{
		l2 = ft_lstnew((*f)(lst->content));
		if (!l2)
		{
			ft_lstclear(&l2, del);
			return (NULL);
		}
		ft_lstadd_back(&l1, l2);
		lst = lst->next;
		l2 = l2->next;
	}
	return (l1);
}
