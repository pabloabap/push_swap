/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_sorted_small_stack_a.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:10:50 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/03 19:47:54 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_write_sorted_small_stack_a(t_stack **head)
{
	t_stack	*tmp;

	tmp = (*head)->next;
	ft_update_rank(head);
	if ((*head)->rank == 2 && tmp->rank == 1)
		write(1, "sa\nrra\n", 7);
	else if ((*head)->rank == 2 && tmp->rank == 0)
		write(1, "ra\n", 3);
	else if ((*head)->rank == 1 && tmp->rank == 2)
		write(1, "rra\n", 4);
	else if ((*head)->rank == 1 && tmp->rank == 0)
		write(1, "sa\n", 3);
	else if ((*head)->rank == 0 && tmp->rank == 2)
		write(1, "sa\nra\n", 6);
}
