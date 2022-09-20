/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:00 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/20 14:03:51 by gdominic         ###   ########.fr       */
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
	ft_printf("salimos del while\n");
	rows = 0;
	a->numbers[rows] = b->numbers[rows];
	ft_printf("pa\n");
	ft_printf("==========================================================\n");
	b->lenght--;
}
