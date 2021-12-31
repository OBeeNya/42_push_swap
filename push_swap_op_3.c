/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_op_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <baubigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 11:19:55 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/29 14:14:14 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	op_rrr(long int *stack_a, long int *stack_b, int stack_len)
{
	op_rra(stack_a, stack_len);
	op_rrb(stack_b, stack_len);
	write(1, "rrr\n", 4);
}
