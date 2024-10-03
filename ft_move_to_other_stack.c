/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_to_other_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:03:06 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 22:03:50 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_find_optim(t_stack *curr_a);
static void		ft_execute(t_stack *optim, t_stack **sa, t_stack **sb);
static void		ft_paralel_op(t_stack *optim, t_stack **sa, t_stack **sb);
static void		ft_single_rot(t_stack *optim, t_stack **sa, t_stack **sb);

void	ft_move_to_other_stack(t_stack **from, t_stack **to)
{
	t_stack	*optim;

	optim = ft_find_optim(*from);
	ft_execute(optim, from, to);
}

static t_stack	*ft_find_optim(t_stack *curr_a)
{
	t_stack	*optim;

	optim = curr_a;
	while (curr_a)
	{
		if (curr_a->total_mov < optim->total_mov)
			optim = curr_a;
		curr_a = curr_a->next;
	}
	return (optim);
}

static void	ft_execute(t_stack *optim, t_stack **sa, t_stack **sb)
{
	while (optim->total_mov > 0)
	{
		ft_paralel_op(optim, sa, sb);
		if (optim->total_mov > 0)
		{
			ft_single_rot(optim, sa, sb);
			optim->total_mov -= 1;
		}
	}
	write(1, "pb\n", 3);
	ft_push(sa, sb);
}

static void	ft_paralel_op(t_stack *optim, t_stack **sa, t_stack **sb)
{
	while (optim->rra > 0 && optim->rrb > 0)
	{
		write (1, "rrr\n", 4);
		ft_reverse_rotate(sa);
		ft_reverse_rotate(sb);
		optim->rra--;
		optim->rrb--;
		optim->total_mov -= 2;
	}
	while (optim->ra > 0 && optim->rb > 0)
	{
		write (1, "rr\n", 3);
		ft_rotate(sa);
		ft_rotate(sb);
		optim->ra--;
		optim->rb--;
		optim->total_mov -= 2;
	}
}

static void	ft_single_rot(t_stack *optim, t_stack **sa, t_stack **sb)
{
	if (optim->ra > 0)
	{
		write (1, "ra\n", 3);
		ft_rotate(sa);
		optim->ra--;
	}
	else if (optim->rb > 0)
	{
		write (1, "rb\n", 3);
		ft_rotate(sb);
		optim->rb--;
	}
	else if (optim->rra > 0)
	{
		write (1, "rra\n", 4);
		ft_reverse_rotate(sa);
		optim->rra--;
	}
	else if (optim->rrb > 0)
	{
		write (1, "rrb\n", 4);
		ft_reverse_rotate(sb);
		optim->rrb--;
	}
}
