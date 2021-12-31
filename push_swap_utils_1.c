/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <baubigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:33:22 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/31 18:05:08 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prep_stacks(long int *s_a, long int *s_b, int l, char **av)
{
	int	i;

	i = 0;
	while (i < l)
	{
		s_a[i] = ft_atol(av[i + 1]);
		i++;
	}
	s_a[i] = '\0';
	i = 0;
	while (i < l)
	{
		s_b[i] = BLANK;
		i++;
	}
	s_b[i] = '\0';
}

void	copy_stack(long int *s_a, long int *s_s, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		s_s[i] = s_a[i];
		i++;
	}	
	s_s[i] = '\0';
}

void	sort_stack(long int *s_s, int l)
{
	int			i;
	int			j;
	long int	t;

	i = 0;
	while (i < l)
	{
		j = i + 1;
		while (j < l)
		{
			if (s_s[i] > s_s[j])
			{
				t = s_s[i];
				s_s[i] = s_s[j];
				s_s[j] = t;
			}
			j++;
		}
		i++;
	}
}

void	replace_nb(long int *s_a, long int *s_s, int l)
{
	int	i;
	int	j;

	i = 0;
	while (i < l)
	{
		j = 0;
		while (j < l)
		{
			if (s_a[i] == s_s[j])
			{
				s_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

long int	convert_binary(long int n)
{
	long int	b[30];
	long int	bin;
	int			i;

	bin = 0;
	i = 0;
	while (i < 30)
		b[i++] = 0;
	i = 0;
	while (n > 0)
	{
		b[i] = n % 2;
		i++;
		n /= 2;
	}
	i = 29;
	while (i > -1)
		bin = bin * 10 + b[i--];
	return (bin);
}
