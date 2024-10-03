# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <pabad-ap@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 12:24:29 by pabad-ap          #+#    #+#              #
#    Updated: 2024/02/07 22:36:39 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
LIBFT		= ./libft/libft.a
CC			= gcc
CFLAGS		= -g -Wall -Wextra -Werror

OBJS		= int_dup_checker.o int_input_checker.o input_checks.o main.o \
			  sort_check.o ft_newstack.o ft_stack_add_front.o \
			  ft_stack_add_back.o ft_stack_last.o ft_stack_size.o \
			  ft_push.o ft_swap.o ft_reverse_rotate.o ft_rotate.o \
			  ft_stack_operations.o ft_fill_stack.o ft_free_stack.o \
			  ft_update_rank.o ft_write_sorted_small_stack_a.o \
			  ft_sort_small_stack_asc.o \
			  ft_process_stack_a.o ft_process_big_stack.o ft_reset_costs.o \
			  ft_cost_top_a.o ft_cost_to_b.o ft_cost_b_pos.o \
			  ft_move_to_other_stack.o ft_b_to_a.o ft_final_sort.o

all: $(NAME)

$(NAME) : $(OBJS)  
	$(CC) $(CCFLAGS) $(OBJS) -L./libft/ -lft -o $(NAME)

$(OBJS): Makefile push_swap.h $(LIBFT)

$(LIBFT): libft

libft :
	$(MAKE) -C ./libft

clean :
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
