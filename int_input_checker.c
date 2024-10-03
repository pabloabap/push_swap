/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_input_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:22:24 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/01/21 01:19:34 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	int_check(char *str, int *digits);
int			signed_zero_check(char *str);

int	int_input_checker(char *str)
{
	int	flag_is_int;
	int	digits;
	int	flag_signed_zero;

	flag_is_int = 0;
	digits = 0;
	flag_signed_zero = signed_zero_check(str);
	if ((str[0] == '+' || str[0] == '-') && (ft_atoi(str) != 0 \
			|| flag_signed_zero == 1))
	{
		if (ft_atoi(str) == -2147483648)
			flag_is_int = 1;
		int_check(++str, &digits);
	}
	else if (str[0] >= '0' && str[0] <= '9')
		int_check(str, &digits);
	if (digits < 11 && digits > 0)
		flag_is_int = 1;
	return (flag_is_int);
}

static void	int_check(char *str, int *digits)
{
	int	i;

	i = 0;
	if (str[i] == '0' && str[i + 1] == '\0')
		*digits += 1;
	else
	{
		while (str[i] == '0')
			i ++;
		if (str[i - 1] == '0' && str[i] == '\0')
			*digits += 1;
		while (str[i] >= '0' && str[i] <= '9' && ft_atoi(str) != 0)
		{
			*digits += 1;
			i ++;
		}
		if (str[i] != 0 && (str[i] <= '0' || str[i] >= '9'))
			*digits = 0;
	}
}

int	signed_zero_check(char *str)
{
	int	i;
	int	flag_signed_zero;

	i = 0;
	flag_signed_zero = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		i ++;
		while (str[i] == '0')
			i ++;
		if (str[i] == '\0')
			flag_signed_zero = 1;
	}
	return (flag_signed_zero);
}
