/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_op_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <baubigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 20:01:05 by benjamin          #+#    #+#             */
/*   Updated: 2021/12/29 15:59:31 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	op_ra(long int *stack, int stack_len)
{
	int			i;
	long int	temp;

	i = 0;
	while (stack[i] == BLANK)
		i++;
	temp = stack[i];
	while (i + 1 < stack_len)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = temp;
	write(1, "ra\n", 3);
}

void	op_rb(long int *stack, int stack_len)
{
	int			i;
	long int	temp;

	i = 0;
	while (stack[i] == BLANK)
		i++;
	temp = stack[i];
	while (i + 1 < stack_len)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = temp;
	write(1, "rb\n", 3);
}

void	op_rr(long int *stack_a, long int *stack_b, int stack_len)
{
	op_ra(stack_a, stack_len);
	op_rb(stack_b, stack_len);
	write(1, "rr\n", 3);
}

void	op_rra(long int *stack, int stack_len)
{
	int			i;
	int			j;
	long int	temp;

	i = 0;
	while (stack[i] == BLANK)
		i++;
	j = stack_len - 1;
	temp = stack[j];
	while (j > i)
	{
		stack[j] = stack[j - 1];
		j--;
	}
	stack[i] = temp;
	write(1, "rra\n", 4);
}

void	op_rrb(long int *stack, int stack_len)
{
	int			i;
	int			j;
	long int	temp;

	i = 0;
	while (stack[i] == BLANK)
		i++;
	j = stack_len - 1;
	temp = stack[j];
	while (j > i)
	{
		stack[j] = stack[j - 1];
		j--;
	}
	stack[i] = temp;
	write(1, "rrb\n", 4);
}
