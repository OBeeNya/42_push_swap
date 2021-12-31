/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <baubigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:07:37 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/31 19:26:56 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	convert_stack(long int *s_a, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		s_a[i] = convert_binary(s_a[i]);
		i++;
	}
}

int	is_stack_empty(long int *s, int l)
{
	int	i;

	i = 0;
	while (i < l)
		if (s[i++] != BLANK)
			return (0);
	return (1);
}

int	get_max_len(long int *s, int l)
{
	int	i;
	int	max;
	int	m;

	i = 0;
	m = 0;
	max = 0;
	while (i < l)
	{
		if (s[i] > max)
			max = s[i];
		i++;
	}
	while (max / 10 > 0)
	{
		m++;
		max /= 10;
	}
	m++;
	return (m);
}

long int	get_first_elem(long int *s)
{
	int			i;
	long int	f;

	i = 0;
	while (s[i] == BLANK)
		i++;
	f = s[i];
	return (f);
}

void	algo(long int *s_a, long int *s_b, int l)
{
	int	i;
	int	j;
	int	k;
	int	m;

	i = 1;
	k = 1;
	m = get_max_len(s_a, l);
	while (i <= m)
	{
		j = 0;
		while (j < l)
		{
			if ((get_first_elem(s_a) % (10 * k) / k) == 0)
				op_pb(s_a, s_b, l);
			else
				op_ra(s_a, l);
			j++;
		}
		while (!is_stack_empty(s_b, l))
			op_pa(s_b, s_a, l);
		i++;
		k *= 10;
	}
}
