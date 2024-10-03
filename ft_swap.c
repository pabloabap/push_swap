/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:40:14 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 22:40:16 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **head_of_stk)
{
	t_stack	*tmp;

	if (*head_of_stk && (*head_of_stk)->next)
	{
		tmp = (*head_of_stk)->next;
		(*head_of_stk)->next = (*head_of_stk)->next->next;
		tmp->next = *head_of_stk;
		*head_of_stk = tmp;
	}
}
