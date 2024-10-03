/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_costs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:06:22 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 22:06:25 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reset_costs(t_stack *head)
{
	while (head)
	{
		head->pa = 0;
		head->pb = 0;
		head->sa = 0;
		head->sb = 0;
		head->ra = 0;
		head->rb = 0;
		head->rra = 0;
		head->rrb = 0;
		head->total_mov = 0;
		head = head->next;
	}
}
