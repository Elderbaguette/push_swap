/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aproust <aproust@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:32:30 by aproust           #+#    #+#             */
/*   Updated: 2023/04/17 13:32:34 by aproust          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_numbers(char **argv)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (argv[++j])
	{
		if (argv[j][0] == '-' || argv[j][0] == '+')
		{
			i++;
			if (argv[j][1] < '0' || argv[j][1] > '9')
				return (1);
		}
		while (argv[j][++i])
		{
			if (argv[j][i] < '0' || argv[j][i] > '9')
				return (1);
		}
		if (ft_long_atoi(argv[j]) > 2147483647
			|| ft_long_atoi(argv[j]) < -2147483648)
			return (1);
		i = -1;
	}
	return (0);
}

int	check_nb(t_stack *stack, int check_value, t_data *data)
{
	t_stack	*nb;

	nb = stack;
	while (nb)
	{
		if (nb->value == check_value)
		{
			if (data->err == 1)
				return (1);
			data->err = 1;
		}
		nb = nb->next;
	}
	return (0);
}

int	check_double(t_data *data)
{
	t_stack	*nb;

	nb = data->stack_a;
	while (nb)
	{
		if (check_nb(data->stack_a, nb->value, data) == 1)
			return (1);
		data->err = 0;
		nb = nb->next;
	}
	return (0);
}

int	make_stack(t_data *data, char **argv)
{
	int		i;
	t_stack	*nb;

	i = 0;
	if (check_numbers(argv) > 0)
		return (1);
	data->stack_a = new_nb(ft_atoi(argv[++i]));
	if (!data->stack_a)
		return (1);
	while (i < data->len)
	{
		nb = new_nb(ft_atoi(argv[++i]));
		if (!data->stack_a)
			return (1);
		add_back_nb(data->stack_a, nb);
	}
	if (check_double(data) == 1)
	{
		free_stacks(data);
		return (1);
	}
	return (0);
}
