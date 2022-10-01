/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:49:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/01 13:53:13 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_till_hundred(t_stack *a, t_stack *b)
{
	int		full_lenght;
	t_stack	c;

	full_lenght = 0;
	c.intervals = (long *)malloc(sizeof(long) * 4);
	if (!c.intervals)
		free(c.intervals);
	c.intervals[0] = a->lenght / 4;
	c.intervals[1] = a->lenght / 2;
	c.intervals[2] = ((a->lenght * 3) / 4);
	c.intervals[3] = a->lenght;
//	full_lenght = a->lenght;
	while (c.intervals[full_lenght] < a->lenght)
//	while (a->lenght > 0)
	{
		ft_printf("Valor de c.intervals de dentro del while: %d\n", c.intervals[full_lenght]);
		ft_printf("Valor de a->lenght dentro del while: %d\n", a->lenght);
		if (a->lenght > 0 && a->numbers[0][1] <= c.intervals[full_lenght])
		{
			ft_pb(a, b);
			full_lenght++;
		}
		else
			ft_ra(a);
/*		if (a->lenght > 0 && a->numbers[0][1] <= (full_lenght / 2))
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
			ft_ra(a);*/
	}
}
