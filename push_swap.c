/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamin <benjamin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:10:22 by baubigna          #+#    #+#             */
/*   Updated: 2022/01/08 14:59:25 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atol(const char *s)
{
	int			neg;
	long int	atol;

	neg = 0;
	atol = 0;
	if (*s == '-')
	{
		neg++;
		s++;
	}
	while (*s)
		atol = atol * 10 + *s++ - 48;
	if (neg)
		return (-atol);
	return (atol);
}

int	check_args(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if (av[i][0] == 45)
			j++;
		else if (av[i][0] < 48 || av[i][0] > 57)
			return (0);
		while (av[i][j])
		{
			if (av[i][j] < 48 || av[i][j] > 57)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_int(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (ft_atol(av[i]) < -2147483648 || ft_atol(av[i]) > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

int	check_doublons(char **av)
{
	char	**temp;

	while (*av)
	{
		temp = av + 1;
		while (*temp)
		{
			if (ft_atol(*av) == ft_atol(*temp))
				return (0);
			temp++;
		}
		av++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	long int	*s_a;
	long int	*s_b;
	long int	*s_s;
	int			l;

	l = ac - 1;
	if (!check_args(av) || !check_int(av) || !check_doublons(av))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (ac == 1)
		return (0);
	s_a = malloc(sizeof(long int) * (l + 1));
	s_b = malloc(sizeof(long int) * (l + 1));
	s_s = malloc(sizeof(long int) * (l + 1));
	if (!s_a || !s_b || !s_s)
		return (0);
	prep_stacks(s_a, s_b, l, av);
	if (!is_stack_sorted(s_a, l))
		dispatch(s_a, s_b, s_s, l);
	free_stacks(s_a, s_b, s_s);
	return (0);
}
