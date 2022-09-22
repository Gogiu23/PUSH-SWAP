/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/22 20:19:19 by gdominic         ###   ########.fr       */
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
}	t_stack;

//=====================SRC============================
int			ft_free(t_stack a, int argc);
t_stack		ft_array_generator(int argc, int i, int count, char **argv);
t_stack		ft_assign_alias(t_stack a);
void		ft_error(char *c);
t_stack		ft_array_plus(int argc);
void		ft_sort_two(t_stack a, int argc);
void		ft_sort_three(t_stack a);
void		ft_sort_five(t_stack a, t_stack b, int argc);
//==================CHECKS ERRORS=====================
void		ft_checks_args(int argc, char **argv);
void		ft_checks_ints(t_stack a, int argc);
void		ft_checks_duplicates(char **argv);
void		ft_aissorted(char **argv);
//==================MOVEMENTS=========================
void		ft_sa(t_stack a);
void		ft_ra(t_stack *a);
void		ft_pb(t_stack *a, t_stack *b);
void		ft_pa(t_stack *a, t_stack *b);
#endif
