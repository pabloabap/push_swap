/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 00:15:14 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/01/21 21:43:41 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	input_checks(int argc, char **argv)
{
	int	input_check_flag;
	int	i;

	input_check_flag = 0;
	i = 1;
	input_check_flag = int_dup_checker(argc, argv);
	while (i < argc && input_check_flag == 0)
	{
		if (!int_input_checker(argv[i]))
			input_check_flag = 1;
		i ++;
	}
	return (input_check_flag);
}
