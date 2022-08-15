/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:19:43 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/10 00:56:52 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_piece
{
	int	number;
	int	game_number;
}	t_piece;

typedef struct s_stack
{
	int	lenght;
	t_piece **array;
}	t_stack;

// int			ft_free(t_values pt1, int count);
int			ft_checks_args(int argc, char **argv);
// t_values	ft_array_generator(int argc, int i, int count, char **argv);
void 		ft_init_stack_a(t_stack *a, int argc, char **argv);
void 		ft_init_stack_b(t_stack *b, int argc);
#endif
