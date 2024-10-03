/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:51:10 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/01/27 23:53:39 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rotate(t_stack **head_of_stk)
{
	t_stack	*tmp;
	t_stack	*lst;

	tmp = *head_of_stk;
	lst = ft_stack_last(*head_of_stk);
	(*head_of_stk) = (*head_of_stk)->next;
	lst->next = tmp;
	tmp->next = NULL;
}
