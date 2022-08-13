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
# include <limits.h>
# include <stdio.h>

typedef struct s_values
{
	int	lenght;
	int	**numbers;
}	t_values;

int			ft_free(t_values pt1, int count);
t_values	ft_check_errors(t_values pt1, t_values lenght);

#endif
