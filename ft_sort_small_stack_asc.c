/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_stack_asc.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:40:40 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/03 18:18:20 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_switch_values(t_stack **item1, t_stack **item2);

void	ft_sort_small_stack_asc(t_stack **head)
{
	t_stack	*tmp;

	tmp = (*head)->next;
	ft_update_rank(head);
	if ((*head)->rank == 0 && tmp->rank == 2)
		ft_switch_values(&tmp, &(tmp->next));
	else if ((*head)->rank == 1 && tmp->rank == 0)
		ft_switch_values(head, &tmp);
	else if ((*head)->rank == 1 && tmp->rank == 2)
	{
		tmp->next->next = *head;
		*head = tmp->next;
		tmp->next = NULL;
	}
	else if ((*head)->rank == 2 && tmp->rank == 0)
	{
		tmp->next->next = *head;
		*head = tmp;
		tmp->next->next->next = NULL;
	}
	else if ((*head)->rank == 2 && tmp->rank == 1)
		ft_switch_values(head, &(tmp->next));
	ft_update_rank(head);
}

static void	ft_switch_values(t_stack **item1, t_stack **item2)
{
	int	tmp;

	tmp = (*item1)->value;
	(*item1)->value = (*item2)->value;
	(*item2)->value = tmp;
}
