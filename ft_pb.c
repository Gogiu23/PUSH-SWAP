/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:23:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/20 11:58:05 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_pb(t_stack *a, t_stack *b, int argc)
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
	ft_printf("Valor de rows: %d\t Valor de argc: %d\n", rows, argc);
	a->numbers[rows] = &max;
	a->numbers[rows][1] = max;
	b->lenght++;
	ft_printf("El valor de b->lenght en el pb: %d\n", b->lenght);
	//ft_printf("Valor de a->numbers al final: %d\n", a->numbers[4][0]);
	ft_printf("pb\n");
	ft_printf("==========================================================\n");
	//ft_printf("error aqui?\n");
}
