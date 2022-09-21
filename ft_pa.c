/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:00 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/21 17:25:53 by gdominic         ###   ########.fr       */
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
	rows = (a->lenght);
	if (a->lenght != 0)
	{
		while (rows > 0)
		{
			a->numbers[i] = a->numbers[i - 1];
			i--;
			rows--;
			ft_printf("Valor de a.numbers[%d]: %d\n", (rows), a->numbers[rows][0]);
		}
		a->lenght++;
	}
	ft_printf("salimos del while\n");
	rows = 0;
	a->numbers[0] = b->numbers[0];
	b->numbers[rows] = b->numbers[rows + 1];
	ft_printf("pa\n");
	ft_printf("==========================================================\n");
	b->lenght--;
}
