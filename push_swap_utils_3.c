/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamin <benjamin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:13:52 by baubigna          #+#    #+#             */
/*   Updated: 2022/01/07 18:52:18 by benjamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_sorted(long int *s_a, int l)
{
	int	i;

	i = 0;
	while (i + 1 < l)
	{
		if (s_a[i] > s_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	sort_three(long int *s_a, int l)
{
	if ((get_first_elem(s_a) == 0 && get_first_elem(s_a + 1) == 10)
		|| (get_first_elem(s_a) == 1 && get_first_elem(s_a + 1) == 10))
		op_rra(s_a, l);
	if ((get_first_elem(s_a) == 1 && get_first_elem(s_a + 1) == 0)
		|| (get_first_elem(s_a) == 10 && get_first_elem(s_a + 1) == 1))
		op_sa(s_a, l);
	if (get_first_elem(s_a) == 10 && get_first_elem(s_a + 1) == 0)
		op_ra(s_a, l);
	if (get_first_elem(s_a) == 1)
		op_rra(s_a, l);
}

void	sort_threes(long int *s_a, int l)
{
	if ((get_first_elem(s_a) == 10 && get_scd_elem(s_a) == 100)
		|| (get_first_elem(s_a) == 11 && get_scd_elem(s_a) == 100))
		op_rra(s_a, l);
	if ((get_first_elem(s_a) == 11 && get_scd_elem(s_a) == 10)
		|| (get_first_elem(s_a) == 100 && get_scd_elem(s_a) == 11))
		op_sa(s_a, l);
	if (get_first_elem(s_a) == 100 && get_scd_elem(s_a) == 10)
		op_ra(s_a, l);
	if (get_first_elem(s_a) == 11)
		op_rra(s_a, l);
}

void	sort_five(long int *s_a, long int *s_b, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		if (get_first_elem(s_a) == 0 || get_first_elem(s_a) == 1)
			op_pb(s_a, s_b, l);
		else
			op_ra(s_a, l);
		i++;
	}
	sort_threes(s_a, l);
	if (get_first_elem(s_b) == 0)
		op_sb(s_b, l);
	op_pa(s_b, s_a, l);
	op_pa(s_b, s_a, l);
}

void	dispatch(long int *s_a, long int *s_b, long int *s_s, int l)
{
	copy_stack(s_a, s_s, l);
	sort_stack(s_s, l);
	replace_nb(s_a, s_s, l);
	convert_stack(s_a, l);
	if (l == 3)
		sort_three(s_a, l);
	else if (l == 5)
		sort_five(s_a, s_b, l);
	else
		algo(s_a, s_b, l);
}
