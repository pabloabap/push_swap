/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:38:48 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/03 19:46:58 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push(t_stack **from, t_stack **to)
{
	t_stack	*tmp;

	if (*from != NULL)
	{
		tmp = *from;
		if (*to != NULL)
		{
			*from = (*from)->next;
			tmp->next = *to;
			*to = tmp;
		}
		else
		{
			ft_fill_stack(to, (*from)->value);
			*from = (*from)->next;
			free(tmp);
		}
	}
}
