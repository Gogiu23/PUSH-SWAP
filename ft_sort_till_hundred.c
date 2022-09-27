/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:49:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/27 22:49:31 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_till_hundred(t_stack *a, t_stack *b, int frst_chunk)
{
	int count;
	int count2;
	int  full_lenght;
	int	rows;
	int	sec_chunk;
	int	th_chunk;
	int	last_chunk;
	int i;

	full_lenght = a->lenght;
	i = 0;
	rows = 0;
	frst_chunk = (a->lenght / 4);
	ft_printf("Valor de first_chunk: %d\n", frst_chunk);
	sec_chunk = (a->lenght / 2);
	ft_printf("Valor de sec_chunk: %d\n", sec_chunk);
	th_chunk = ((a->lenght * 3) / 4);
	ft_printf("Valor de th_chunk: %d\n", th_chunk);
	last_chunk = (a->lenght);
	ft_printf("Valor de last_chunk: %d\n", last_chunk);
	ft_printf("Valor de a->lenght: %d\n", a->lenght);
	while (a->lenght > 0)
	{
		ft_printf("valor de rows dentro del while: %d\n", rows);
		if (a->lenght > 0 && a->numbers[i][1] <= last_chunk)
		{
			ft_printf("a->numbers: %d\n", a->numbers[0][1]);
			ft_smart_rotate_a(a, i);
			ft_pb(a, b);
		}
		ft_printf("Error aqui 1\n");
		if (a->lenght > 0 && a->numbers[i][1] <= th_chunk)
		{
			ft_printf("a->numbers: %d\n", a->numbers[0][1]);
			ft_smart_rotate_a(a, i);
			ft_pb(a, b);
		}
		ft_printf("Error aqui 2\n");
		if (a->lenght > 0 && a->numbers[i][1] <= sec_chunk)
		{
			ft_printf("a->numbers: %d\n", a->numbers[0][1]);
			ft_smart_rotate_a(a, i);
			ft_pb(a, b);
		}
		ft_printf("a->lenght: %d\n", a->lenght);
		ft_printf("Error aqui 3\n");
		ft_printf("i: %d\n", i);
		if (a->lenght > 0 && a->numbers[i][1] <= frst_chunk)
		{
			ft_printf("prueba\n");
			ft_smart_rotate_a(a, i);
			ft_pb(a, b);
		}
		ft_printf("Error aqui 4\n");
		count = 0;
		count2 = 0;
		while (count < b->lenght)
		{
			ft_printf("valor despues de ser ordenado = b->numbers[%d]: %d\t%d\n", count, b->numbers[count][0], b->numbers[count][1]);
			count2++;
			count++;
		}
		ft_printf("==========================================================\n");
		count = 0;
		count2 = 1;
		while (count < (a->lenght))
		{
			ft_printf("valor despues de ser ordenado = a->numbers[%d][%d]: %d\t%d\n", count, count2, a->numbers[count][0], a->numbers[count][1]);
			count++;
		}
		ft_printf("==========================================================\n");
	//	rows++;
	//	i++;
	}
	ft_printf("Vuelvo aqui?\n");
	ft_printf("valor de a->lenght: %d\n", a->lenght);
	ft_printf("valor de full_lenght: %d\n", full_lenght);
}
