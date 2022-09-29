/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:49:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/29 14:01:50 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_till_hundred(t_stack *a, t_stack *b)
{
	int  full_lenght;

	full_lenght = a->lenght;
	while ()
	while (a->lenght > 0)
	{
		if (a->lenght > 0 && a->numbers[0][1] <= (full_lenght / 4))
			ft_pb(a, b);
		else
			ft_ra(a);
		if (a->lenght > 0 && a->numbers[0][1] <= (full_lenght / 2))
			ft_pb(a, b);
		else
			ft_ra(a);
		if (a->lenght > 0 && a->numbers[0][1] <= (full_lenght * 3 / 4))
			ft_pb(a, b);
		else
			ft_ra(a);
		if (a->lenght > 0 && a->numbers[0][1] <= full_lenght)
			ft_pb(a, b);
		else
			ft_ra(a);
	}
}
