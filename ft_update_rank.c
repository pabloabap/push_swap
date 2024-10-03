/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_rank.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:16:18 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/03 18:16:38 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_update_rank(t_stack **head)
{
	int		rank;
	t_stack	*current;
	t_stack	*tmp;

	rank = 0;
	current = *head;
	tmp = *head;
	while (current)
	{
		while (tmp)
		{
			if (current->value > tmp->value)
				rank++;
			tmp = tmp->next;
		}
		tmp = *head;
		current->rank = rank;
		current = current->next;
		rank = 0;
	}
}
