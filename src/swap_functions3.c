/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:56:22 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 10:25:07 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverse_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate_a(stack_a, true);
	ft_reverse_rotate_b(stack_b, true);
	ft_printf("%s\n", "rrr");
}
