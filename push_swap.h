/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <baubigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:33:59 by baubigna          #+#    #+#             */
/*   Updated: 2022/01/07 15:11:48 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BLANK
#  define BLANK LONG_MAX
# endif

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void		prep_stacks(long int *s_a, long int *s_b, int l, char **av);
void		copy_stack(long int *s_a, long int *s_s, int l);
void		sort_stack(long int *s_s, int l);
void		replace_nb(long int *s_a, long int *s_s, int l);
long int	convert_binary(long int n);

void		convert_stack(long int *s_a, int l);
int			is_stack_empty(long int *s, int l);
void		algo(long int *s_a, long int *s_b, int l);
int			get_max_len(long int *s, int l);
long int	get_first_elem(long int *s);

int			is_stack_sorted(long int *s_a, int l);
void		sort_three(long int *s_a, int l);
void		sort_five(long int *s_a, long int *s_b, int l);
void		dispatch_cases(long int *s_a, long int *s_b, char **av, int l);

void		op_sa(long int *stack, int stack_len);
void		op_sb(long int *stack, int stack_len);
void		op_ss(long int *stack_a, long int *stack_b, int stack_len);
void		op_pa(long int *stack_b, long int *stack_a, int stack_len);
void		op_pb(long int *stack_a, long int *stack_b, int stack_len);

void		op_ra(long int *stack, int stack_len);
void		op_rb(long int *stack, int stack_len);
void		op_rr(long int *stack_a, long int *stack_b, int stack_len);
void		op_rra(long int *stack, int stack_len);
void		op_rrb(long int *stack, int stack_len);

void		op_rrr(long int *stack_a, long int *stack_b, int stack_len);

long int	ft_atol(const char *s);
int			check_args(char **av);
int			check_int(char **av);
int			check_doublons(char **av);
int			main(int ac, char **av);

#endif
