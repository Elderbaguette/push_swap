/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aproust <aproust@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:32:24 by aproust           #+#    #+#             */
/*   Updated: 2023/04/17 13:32:25 by aproust          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_sort(t_data *data)
{
	if (is_sort(data) == 0)
		return ;
	if (data->len == 4)
	{
		pb(data);
		sort_three_numbers(data);
		sort_stack(data);
	}
	else if (data->len < 3)
	{
		if (data->len == 2 && data->stack_a->value > data->stack_a->next->value)
			ra(data);
	}
	else
	{
		sort_median(data);
		sort_stack(data);
	}
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc > 1)
	{
		data.stack_a = NULL;
		data.stack_b = NULL;
		data.len = argc - 1;
		data.err = 0;
		if (make_stack(&data, argv) > 0)
			return (ft_printf("Error\n"));
		make_sort(&data);
		free_stacks(&data);
	}
	else
		return (0);
}
