/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:54:29 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 22:02:29 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate_up_down(t_stack *curr, t_stack **head);
static void	ft_rotate_down_up(t_stack *curr, t_stack **head);

void	ft_final_sort(t_stack **head)
{
	int		pos;
	t_stack	*curr;

	pos = 0;
	curr = *head;
	ft_update_rank(head);
	while (curr->rank != 0)
	{
		pos++;
		curr = curr->next;
	}
	if (pos > (ft_stack_size(*head) / 2))
		ft_rotate_down_up(curr, head);
	else
		ft_rotate_up_down(curr, head);
}

static void	ft_rotate_up_down(t_stack *curr, t_stack **head)
{
	while (curr != *head)
	{
		write(1, "ra\n", 3);
		ft_rotate(head);
	}
}

static void	ft_rotate_down_up(t_stack *curr, t_stack **head)
{
	while (curr != *head)
	{
		write(1, "rra\n", 4);
		ft_reverse_rotate(head);
	}
}
