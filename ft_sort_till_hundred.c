/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic:git@student.42barcelon  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:58:41 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/26 21:37:48 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_till_hundred(t_stack *a, t_stack *b, int frst_chunk)
{
	int	rows;
	int	sec_chunk;
	int	th_chunk;
	int	last_chunk;

	rows = 0;
	frst_chunk = (a->lenght / 4);
	ft_printf("Valor de first_chunk: %d\n", frst_chunk);
	sec_chunk = (a->lenght / 2);
	th_chunk = ((a->lenght * 3) / 4);
	last_chunk = a->lenght;
	ft_printf("Valor de a->lenght: %d\n", a->lenght);
	while (rows < (a->lenght - 1))
	{
		if(a->numbers[rows][1] <= frst_chunk)
			ft_smart_rotate_a(a, rows);
		ft_pb(a, b);
		if(a->numbers[rows][1] <= sec_chunk)
			ft_smart_rotate_a(a, rows);
		ft_pb(a, b);
		if(a->numbers[rows][1] <= th_chunk)
			ft_smart_rotate_a(a, rows);
		ft_pb(a, b);
		if(a->numbers[rows][1] <= last_chunk)
			ft_smart_rotate_a(a, rows);
		ft_pb(a, b);
		rows++;
	}
}
