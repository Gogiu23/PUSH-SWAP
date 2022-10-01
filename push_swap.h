/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/01 13:45:30 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int		lenght;
	long	**numbers;
	long	*intervals;
}	t_stack;

//=====================SRC============================
int			ft_free(t_stack a, int argc);
t_stack		ft_array_generator(int argc, int i, int count, char **argv);
t_stack		ft_assign_alias(t_stack a);
void		ft_error(char *c);
t_stack		ft_array_plus(int argc);
void		ft_sort_two(t_stack a, int argc);
void		ft_sort_three(t_stack a);
void		ft_sort_till_five(t_stack *a, t_stack *b, int i, int argc);
void		ft_sort_four(t_stack *a, t_stack *b, int i);
void		ft_sort_five(t_stack *a, t_stack *b, int i);
void		ft_sort_till_hundred(t_stack *a, t_stack *b);
//==================FIXED ARRAYS=======================
t_stack		ft_remode_stacka(t_stack a);
void		ft_smart_rotate_a(t_stack *a, int rows);
void		ft_smart_rotate_b(t_stack *b, int rows);
//void		ft_relocate_stackb(*b);
//==================CHECKS ERRORS=====================
void		ft_checks_args(int argc, char **argv);
void		ft_checks_ints(t_stack a, int argc);
void		ft_checks_duplicates(char **argv);
void		ft_aissorted(char **argv);
//==================MOVEMENTS=========================
void		ft_sa(t_stack a);
void		ft_sb(t_stack b);
void		ft_ra(t_stack *a);
void		ft_rb(t_stack *b);
void		ft_rr(t_stack *a, t_stack *b);
void		ft_second_rr(t_stack b);
void		ft_rra(t_stack *a);
void		ft_rrb(t_stack *b);
void		ft_rrr(t_stack *a, t_stack *b);
void		ft_second_rrr(t_stack b);
void		ft_pb(t_stack *a, t_stack *b);
void		ft_pa(t_stack *a, t_stack *b);
//================PRINT STACK======================
void		ft_print_stack(t_stack *a, t_stack *b);
#endif
