/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dup_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:14:19 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/01/27 18:30:31 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	int_dup_checker(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	flag_duplicated;

	num1 = 1;
	num2 = 2;
	flag_duplicated = 0;
	if (argc > 2)
	{
		while (num1 <= argc - 2 && flag_duplicated == 0)
		{
			while (num2 < argc && flag_duplicated == 0)
			{
				if (ft_atoi(argv[num1]) == ft_atoi(argv[num2]))
					flag_duplicated = 1;
				num2 ++;
			}
			num1 ++;
			num2 = num1 + 1;
		}
	}
	return (flag_duplicated);
}
