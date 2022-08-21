/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/20 21:30:35 by gdominic         ###   ########.fr       */
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

typedef struct s_oppte
{
	int	lenght;
	int	**numbers;
}	t_oppte;

int			ft_free(t_stack a, int argc);
void		ft_checks_args(int argc, char **argv);
t_stack		ft_array_generator(int argc, int i, int count, char **argv);
void		ft_checks_ints(t_stack a, int argc);
void		ft_error(char *c);
void		ft_checks_duplicates(char **argv);
t_stack		ft_array_plus(int argc);

#endif
