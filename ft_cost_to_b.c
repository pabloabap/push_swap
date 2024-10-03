/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:52:02 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 21:52:05 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cost_to_b(t_stack **sta, t_stack **stb)
{
	ft_reset_costs(*sta);
	ft_cost_top_a(*sta);
	ft_cost_b_pos(sta, stb);
}
