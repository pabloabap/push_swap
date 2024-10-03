/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:58:11 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/03 18:00:53 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_stack_a(t_stack **sta, t_stack **stb)
{
	if (ft_stack_size(*sta) < 3)
	{
		if ((*sta)->value > (*sta)->next->value)
			write (1, "sa\n", 3);
	}
	else if (ft_stack_size(*sta) == 3)
		ft_write_sorted_small_stack_a(sta);
	else
		ft_process_big_stack(sta, stb);
}
