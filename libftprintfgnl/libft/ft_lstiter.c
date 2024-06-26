/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaret <marbaret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:10:10 by marbaret          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:07 by marbaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void f(void *c)
// {
//     ((char *)c)[0] = '\n';
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst->next)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
	(*f)(lst->content);
}

// void printlist(t_list *l)
// {
// 	while(l)
// 	{
// 		printf("%s", (char *)l->content);
// 		l = l->next;
// 	}
// }

// int main()
// {
//     char *a2;
//     char *a1;
//     a1 = malloc(sizeof(char) * 8);
//     ft_strlcpy(a1,"0word1", 8);
//     a2 = malloc(sizeof(char) * 8);
//     ft_strlcpy(a2,"0word2", 8);
//     t_list    *l1 = ft_lstnew(a1);
//     l1->next = ft_lstnew(a2);
//     ft_lstiter(l1, &f);
//     printlist(l1);
// }
