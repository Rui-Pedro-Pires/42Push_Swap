/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:38:29 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/13 09:35:40 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	else
		ft_creat_list(&stack_a, argc, argv + 1);
	if (!stack_a)
	{
		write (STDERR_FILENO, "Error\n", 6);
		return (1);
	}
	if (!ft_algorithm(&stack_a, &stack_b))
	{
		ft_clean(&stack_a, &stack_b);
		return (2);
	}
	if (ft_stack_sorted(stack_a) && stack_b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_clean(&stack_a, &stack_b);
	return (0);
}
