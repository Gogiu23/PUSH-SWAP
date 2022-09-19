/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:00 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/19 13:46:17 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft/libft.h"
#include "push_swap.h"

void  ft_pa(t_stack *a, t_stack *b)
{
	long  rows;
	int	  i;

	i = a->lenght;
	ft_printf("Valor de a->lenght: %d\n", a->lenght);
	ft_printf("valor de i: %d\n", i);
	rows = 0;
	if (a->lenght != 0)
	{
		while (i >= 0)
		{
			a->numbers[rows + 1] = a->numbers[rows];
			i--;
			rows++;
		}
		a->lenght++;
	}
//	while (counter < (a->lenght))
//	{
//		ft_printf("Dentro del while en pa\n");
//		a->numbers[rows + 1] = a->numbers[rows];
//		counter++;
//		rows++;
//	}
	ft_printf("salimos del while\n");
//	a->lenght++;
	rows = 0;
	a->numbers[rows] = b->numbers[rows];
	b->lenght--;
}
