/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_b_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:50:11 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 21:51:23 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rank_a_in_b(t_stack *ca, t_stack *cb);
static int	pos_a_in_b(t_stack *cb, int rank);
static void	add_b_mov_to_a(t_stack *ca, t_stack *cb, int pos);

void	ft_cost_b_pos(t_stack **head_a, t_stack **head_b)
{
	int		rank;
	int		pos;
	t_stack	*curr_a;
	t_stack	*curr_b;

	rank = 0;
	pos = 0;
	curr_a = *head_a;
	curr_b = *head_b;
	ft_update_rank(head_b);
	ft_update_rank(head_a);
	while (curr_a)
	{
		rank = rank_a_in_b(curr_a, curr_b);
		pos = pos_a_in_b(curr_b, rank);
		add_b_mov_to_a(curr_a, curr_b, pos);
		curr_a = curr_a->next;
	}
}

static int	rank_a_in_b(t_stack *ca, t_stack *cb)
{
	int	rank;

	rank = 0;
	while (cb)
	{
		if (ca->value > cb->value)
			rank++;
		cb = cb->next;
	}
	return (rank);
}

static int	pos_a_in_b(t_stack *cb, int rank)
{
	int	len_b;
	int	pos;

	len_b = ft_stack_size(cb);
	pos = 0;
	if (rank != len_b && rank != 0)
	{
		while (cb->rank != (rank - 1))
		{
			pos++;
			cb = cb->next;
		}
	}
	else
	{
		while (cb->rank != (len_b - 1))
		{
			pos++;
			cb = cb->next;
		}
	}
	return (pos);
}

static void	add_b_mov_to_a(t_stack *ca, t_stack *cb, int pos)
{
	int	len_b;

	len_b = ft_stack_size(cb);
	if (pos > len_b / 2)
	{
		while (pos < len_b)
		{
			ca->rrb += 1;
			pos ++;
		}
	}
	else
	{
		while (pos > 0)
		{
			ca->rb += 1;
			pos --;
		}
	}
	ca->total_mov += ca->rb + ca->rrb;
}
