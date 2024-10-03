/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:46:52 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/03 19:43:56 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack(t_stack **stack, int value)
{
	t_stack	*new;
	t_stack	*current;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		exit(EXIT_FAILURE);
	new->value = value;
	new->next = NULL;
	current = *stack;
	if (*stack == NULL)
		*stack = new;
	else
	{
		current = ft_stack_last(*stack);
		current->next = new;
	}
	new = NULL;
	free(new);
}
