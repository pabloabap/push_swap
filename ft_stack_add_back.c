/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:24:30 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/01/27 10:24:36 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_add_back(t_stack **stk, t_stack *new)
{
	t_stack	*tmp;

	if (stk)
	{
		if (*stk == NULL)
			*stk = new;
		else
		{
			tmp = ft_stack_last(*stk);
			tmp->next = new;
		}
	}
}
