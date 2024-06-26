/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_second.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aproust <aproust@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:32:57 by aproust           #+#    #+#             */
/*   Updated: 2023/04/17 13:32:58 by aproust          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_f(t_data *data)
{
	t_stack	*nb_b;
	t_stack	*swap;

	nb_b = data->stack_b;
	if (!nb_b)
		return ;
	swap = new_nb(nb_b->value);
	if (!swap)
		return ;
	swap->next = data->stack_a;
	data->stack_b = nb_b->next;
	data->stack_a = swap;
	free(nb_b);
}

void	pa(t_data *data)
{
	pa_f(data);
	ft_printf("pa\n");
}

void	pb_f(t_data *data)
{
	t_stack	*nb_a;
	t_stack	*swap;

	nb_a = data->stack_a;
	if (!nb_a)
		return ;
	swap = new_nb(nb_a->value);
	if (!swap)
		return ;
	swap->next = data->stack_b;
	data->stack_a = nb_a->next;
	data->stack_b = swap;
	free(nb_a);
}

void	pb(t_data *data)
{
	pb_f(data);
	ft_printf("pb\n");
}
