/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:03:38 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/03 19:45:27 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_free_stack(t_stack **stk)
{
	t_stack	*tmp;

	while (*stk && stk)
	{
		tmp = (*stk)->next;
		free(*stk);
		*stk = tmp;
	}
}
