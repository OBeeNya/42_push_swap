/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_op_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <baubigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:46:43 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/31 19:18:42 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	op_sa(long int *stack, int stack_len)
{
	long int	temp;
	long int	temp2;
	int			i;

	if (stack_len < 2)
		return ;
	i = 0;
	while (stack[i] == BLANK)
		i++;
	temp = stack[i];
	temp2 = stack[i + 1];
	i = 0;
	while (stack[i] == BLANK)
		i++;
	stack[i] = temp2;
	stack[i + 1] = temp;
	write(1, "sa\n", 3);
}

void	op_sb(long int *stack, int stack_len)
{
	long int	temp;
	long int	temp2;
	int			i;

	if (stack_len < 2)
		return ;
	i = 0;
	while (stack[i] == BLANK)
		i++;
	temp = stack[i];
	temp2 = stack[i + 1];
	i = 0;
	while (stack[i] == BLANK)
		i++;
	stack[i] = temp2;
	stack[i + 1] = temp;
	write(1, "sb\n", 3);
}

void	op_ss(long int *stack_a, long int *stack_b, int stack_len)
{
	op_sa(stack_a, stack_len);
	op_sb(stack_b, stack_len);
	write(1, "ss\n", 3);
}

void	op_pa(long int *stack_b, long int *stack_a, int stack_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (is_stack_empty(stack_b, stack_len))
		return ;
	while (stack_a[j] == BLANK)
		j++;
	while (stack_b[i] == BLANK)
		i++;
	stack_a[j - 1] = stack_b[i];
	stack_b[i] = BLANK;
	write(1, "pa\n", 3);
}

void	op_pb(long int *stack_a, long int *stack_b, int stack_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (is_stack_empty(stack_a, stack_len))
		return ;
	while (stack_b[j] == BLANK)
		j++;
	while (stack_a[i] == BLANK)
		i++;
	stack_b[j - 1] = stack_a[i];
	stack_a[i] = BLANK;
	write(1, "pb\n", 3);
}
