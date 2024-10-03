/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_big_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:04:43 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 22:05:27 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_big_stack(t_stack **sta, t_stack **stb)
{
	ft_update_rank(sta);
	while ((*stb == NULL || ft_stack_size(*stb) < 2) \
			&& ft_stack_size(*sta) > 3)
	{
		write(1, "pb\n", 3);
		ft_push(sta, stb);
	}
	while (ft_stack_size(*sta) > 3)
	{
		ft_cost_to_b(sta, stb);
		ft_move_to_other_stack(sta, stb);
		ft_update_rank(sta);
		ft_update_rank(stb);
	}
	ft_write_sorted_small_stack_a(sta);
	ft_sort_small_stack_asc(sta);
	ft_b_to_a(sta, stb);
	ft_final_sort(sta);
}
