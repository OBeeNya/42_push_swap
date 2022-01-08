/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamin <benjamin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:45:08 by benjamin          #+#    #+#             */
/*   Updated: 2022/01/08 14:58:54 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	get_scd_elem(long int *s)
{
	int			i;
	long int	f;

	i = 0;
	while (s[i] == BLANK)
		i++;
	f = s[i + 1];
	return (f);
}

void	free_stacks(long int *s_a, long int *s_b, long int *s_s)
{
	free(s_a);
	free(s_b);
	free(s_s);
}
