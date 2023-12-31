/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:02:09 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 12:08:38 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_elements1(t_list *stack_a, t_list *stack_b)
{
	ft_add_index(stack_a);
	ft_add_index(stack_b);
	ft_target_a(stack_a, stack_b);
	ft_calc_cost(stack_a, stack_b);
	ft_cheapest_node(stack_a);
}

void	ft_add_elements2(t_list *stack_a, t_list *stack_b)
{
	ft_add_index(stack_a);
	ft_add_index(stack_b);
	ft_target_b(stack_a, stack_b);
}

void	ft_add_index(t_list *stack)
{
	int	i;
	int	mid;

	i = 0;
	if (!stack)
		return ;
	mid = ft_stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= mid)
			stack->above_median = true;
		else
			stack->above_median = false;
		i++;
		stack = stack->next;
	}
}
