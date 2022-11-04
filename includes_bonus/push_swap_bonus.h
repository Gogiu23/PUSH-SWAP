/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:05:44 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/04 01:34:33 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int		lenght;
	long	**numbers;
}	t_stack;

//=============== CHECKS ERRORS ===================
void		ft_checks_args_bonus(int argc, char **argv);
void		ft_checks_duplicates_bonus(char **argv);
t_stack		ft_array_generator_bonus(int argc, int i, int count, char **argv);
void		ft_checks_ints_bonus(t_stack a, int argc);
t_stack		ft_array_plus_bonus(int argc);
t_stack		ft_assign_alias_a_bonus(t_stack *a);
t_stack		ft_assign_alias_b_bonus(t_stack *b);
int			ft_free_bonus(t_stack *a);
void		ft_error_bonus(char *c);
void		ft_aissorted_bonus(char **argv);
void		ft_check_commands(char *command, t_stack *a, t_stack *b);
void		ft_checks_stacks_bonus(t_stack *a, t_stack *b);
int			ft_stack_is_sorted_bonus(t_stack *a);
void		ft_print_stack(t_stack *a, t_stack *b);

//============== EDIT ARRAYS ====================
void		ft_remode_stackb_bonus(t_stack *b);
void		ft_remode_stacka_bonus(t_stack *a);

//============== MOVEMENTS BONUS =================
void		ft_sa_bonus(t_stack *a);
void		ft_sb_bonus(t_stack *b);
void		ft_ss_bonus(t_stack *a, t_stack *b);
void		ft_ss2_bonus(t_stack *b);
void		ft_ra_bonus(t_stack *a);
void		ft_rb_bonus(t_stack *b);
void		ft_rr_bonus(t_stack *a, t_stack *b);
void		ft_second_rr_bonus(t_stack b);
void		ft_rra_bonus(t_stack *a);
void		ft_rrb_bonus(t_stack *b);
void		ft_rrr_bonus(t_stack *a, t_stack *b);
void		ft_second_rrr_bonus(t_stack b);
void		ft_pa_bonus(t_stack *a, t_stack *b);
void		ft_pb_bonus(t_stack *a, t_stack *b);

#endif
