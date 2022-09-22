/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:23:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/22 02:47:40 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"
/*
void  ft_pb(t_stack *a, t_stack *b)
{
	long  rows;
	int	  i;

	i = b->lenght;
	ft_printf("Valor de b->lenght: %d\n", b->lenght);
	ft_printf("valor de i: %d\n", i);
	rows = (b->lenght);
	if (b->lenght != 0)
	{
		while (rows > 0)
		{
			b->numbers[i] = b->numbers[i - 1];
			i--;
			rows--;
			ft_printf("Valor de b.numbers[%d]: %d\n", (rows), b->numbers[rows][0]);
		}
	}
	b->lenght++;
	ft_printf("salimos del while\n");
	rows = 0;
	b->numbers[rows] = a->numbers[rows];
	//b->numbers[rows] = b->numbers[rows + 1];
	ft_printf("pb\n");
	ft_printf("==========================================================\n");
	a->lenght--;
}*/

void	ft_pb(t_stack *a, t_stack *b)
{
	long	  rows;
	long	  max;
	long	  i;

	i = b->lenght;
	max = 0;
	rows = 0;
	ft_printf("Entramos en el pb\n");
	if (b->lenght != 0)
	{
		while (i >= 0)
		{
			b->numbers[rows + 1] = b->numbers[rows];
			i--;
			rows++;
		}
		b->lenght--;
	}
	rows = 0;
	b->numbers[rows] = a->numbers[rows];
//	a->lenght--;
	while (rows < (a->lenght - 1))
	{
		ft_printf("Valor de a->lenght dentro del while: %d\n", a->lenght);
		a->numbers[rows] = a->numbers[rows + 1];
		rows++;
	}
	a->lenght--;
//	ft_printf("Valor de rows: %d\t Valor de argc: %d\n", rows, argc);
	a->numbers[rows] = &max;
	a->numbers[rows][1] = max;
	b->lenght++;
	ft_printf("El valor de b->lenght en el pb: %d\n", b->lenght);
	ft_printf("pb\n");
	ft_printf("==========================================================\n");
}
