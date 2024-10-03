/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 03:39:55 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 22:12:47 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_operations(int numbers, char **str_int)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	while (i < numbers)
		ft_fill_stack(&stack_a, ft_atoi(str_int[i++]));
	ft_process_stack_a(&stack_a, &stack_b);
	ft_free_stack(&stack_b);
	ft_free_stack(&stack_a);
	return ;
}
