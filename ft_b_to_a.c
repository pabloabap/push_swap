/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:48:10 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 21:49:56 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_rank_b_in_a(t_stack *ha, t_stack *hb);
static int	ft_pos_b_in_a(t_stack *ha, int rank);
static void	ft_move_a(t_stack **ha, t_stack **hb, int pos);

void	ft_b_to_a(t_stack **ha, t_stack **hb)
{
	int	rank_in_a;
	int	pos_in_a;

	rank_in_a = 0;
	pos_in_a = 0;
	while (*hb)
	{
		ft_update_rank(ha);
		rank_in_a = ft_rank_b_in_a(*ha, *hb);
		pos_in_a = ft_pos_b_in_a(*ha, rank_in_a);
		ft_move_a(ha, hb, pos_in_a);
	}
}

static int	ft_rank_b_in_a(t_stack *ha, t_stack *hb)
{
	int	rank;

	rank = 0;
	while (ha)
	{
		if (hb->value > ha->value)
			rank++;
		ha = ha->next;
	}
	return (rank);
}

static int	ft_pos_b_in_a(t_stack *ha, int rank)
{
	int	pos;

	pos = 0;
	if (rank < ft_stack_size(ha) && rank != 0)
	{
		while (ha->rank != rank)
		{
			pos ++;
			ha = ha->next;
		}
	}
	else
	{
		while (ha->rank != 0)
		{
			pos ++;
			ha = ha->next;
		}
	}
	return (pos);
}

static void	ft_move_a(t_stack **ha, t_stack **hb, int pos)
{
	int	size_sa;

	size_sa = ft_stack_size(*ha);
	if (pos < (size_sa / 2))
	{
		while (pos)
		{
			write(1, "ra\n", 3);
			ft_rotate(ha);
			pos --;
		}
	}
	else
	{
		while (pos < size_sa)
		{
			write(1, "rra\n", 4);
			ft_reverse_rotate(ha);
			pos ++;
		}
	}
	write(1, "pa\n", 3);
	ft_push(hb, ha);
}
