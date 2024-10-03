/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:54:01 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/01/28 20:54:19 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_reverse_rotate(t_stack **head_of_stk)
{
	t_stack	*tmp;

	if (*head_of_stk && (*head_of_stk)->next)
	{
		tmp = ft_stack_last(*head_of_stk);
		tmp->next = (*head_of_stk);
		while ((*head_of_stk)->next != tmp)
			(*head_of_stk) = (*head_of_stk)->next;
		(*head_of_stk)->next = NULL;
		*head_of_stk = tmp;
	}
}
