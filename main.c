/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:22:27 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/03 19:50:17 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (input_checks(argc, argv))
			write(2, "Error\n", 6);
		else if (!sort_check(argc - 2, argv + 1))
			ft_stack_operations(argc, argv);
	}
	return (0);
}
