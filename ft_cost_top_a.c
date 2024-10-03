/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_top_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:51:40 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 21:54:11 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_optim_mov(int pos, int stack_size, t_stack *curr);

void	ft_cost_top_a(t_stack *head)
{
	int		pos;
	t_stack	*curr;
	t_stack	*tmp;

	pos = 0;
	curr = head;
	tmp = head;
	while (curr)
	{
		while (tmp != curr)
		{
			pos ++;
			tmp = tmp->next;
		}
		ft_optim_mov (pos, ft_stack_size(head), curr);
		curr->total_mov += curr->ra + curr->rra;
		curr = curr->next;
		tmp = head;
		pos = 0;
	}
}

static void	ft_optim_mov(int pos, int stack_size, t_stack *curr)
{
	if (pos < (stack_size / 2 + 1))
		while (pos-- > 0)
			curr->ra += 1;
	else
		while (pos++ < stack_size)
			curr->rra += 1;
}
