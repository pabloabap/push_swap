/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:22:31 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/02/07 22:30:18 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				rank;
	int				pa;
	int				pb;
	int				sa;
	int				sb;
	int				ra;
	int				rb;
	int				rra;
	int				rrb;
	int				total_mov;
	struct s_stack	*next;
}					t_stack;

int		int_input_checker(char *str);

int		int_dup_checker(int argc, char **argv);

int		input_checks(int argc, char **argv);

int		sort_check(int to_compare, char **elements);

t_stack	*ft_stack_last(t_stack	*stk);

void	ft_stack_add_back(t_stack **stk, t_stack *new);

void	ft_stack_add_front(t_stack **stk, t_stack *new);

int		ft_stack_size(t_stack *stk);

void	ft_stack_operations(int numbers, char **str_int);

void	ft_fill_stack(t_stack **stack, int value);

void	ft_push(t_stack **from, t_stack **to);

void	ft_swap(t_stack	**head_of_stack);

void	ft_rotate(t_stack **head_of_stk);

void	ft_reverse_rotate(t_stack **head_of_stk);

void	ft_free_stack(t_stack **stk);

void	ft_update_rank(t_stack **head);

void	ft_write_sorted_small_stack_a(t_stack **head);

void	ft_sort_small_stack_asc(t_stack **head);

void	ft_process_stack_a(t_stack **stack, t_stack **stack2);

void	ft_process_big_stack(t_stack **sta, t_stack **stb);	

void	ft_cost_to_b(t_stack **sta, t_stack **stb);

void	ft_reset_costs(t_stack *head);

void	ft_cost_top_a(t_stack *head);

void	ft_cost_b_pos(t_stack **head_a, t_stack **head_b);

void	ft_move_to_other_stack(t_stack **from, t_stack **to);

void	ft_b_to_a(t_stack **head_b, t_stack **head_a);

void	ft_final_sort(t_stack **stack);
