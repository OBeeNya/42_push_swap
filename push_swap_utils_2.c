/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <baubigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:07:37 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/31 18:45:03 by baubigna         ###   ########.fr       */
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
	int max;
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
	printf("%d\n", max);
	while (max / 10 > 0)
	{
		m++;
		max /= 10;
	}
	m++;
	return (m);
}

void	algo(long int *s_a, long int *s_b, int l)
{
//	int	i;
	int	m;
	
	printf("%ld\n", s_b[0]);
	m = get_max_len(s_a, l);
	printf("%d\n", m);
}
