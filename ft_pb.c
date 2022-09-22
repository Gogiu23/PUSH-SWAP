/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:23:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/22 20:46:49 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void  ft_pb(t_stack *a, t_stack *b)
{
	long  rows;
	int	  i;

	i = b->lenght;
	ft_printf("Valor de b->lenght: %d\n", b->lenght);
	ft_printf("valor de i: %d\n", i);
	rows = 0;
	if (b->lenght != 0)
	{
		while (rows <= b->lenght)
		{
			b->numbers[rows] = b->numbers[rows - 1];
			i--;
			rows++;
			ft_printf("Valor en el PB de b.numbers[%d]: %d\n", (rows), b->numbers[rows][0]);
		}
		b->lenght++;
	}
	b->lenght++;
	ft_printf("salimos del while\n");
	rows = 0;
	b->numbers[rows] = a->numbers[rows];
	b->numbers[rows] = b->numbers[rows + 1];
	ft_printf("pb\n");
	ft_printf("==========================================================\n");
	a->lenght--;
}
