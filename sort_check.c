/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:00:41 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/01/21 17:08:13 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	sort_check(int to_compare, char **elements)
{
	int	sort_ascend;
	int	i;

	sort_ascend = 1;
	i = 0;
	while (i < to_compare && sort_ascend)
	{
		if (ft_atoi(elements[i]) > ft_atoi(elements[i + 1]))
			sort_ascend = 0;
		i ++;
	}
	return (sort_ascend);
}
