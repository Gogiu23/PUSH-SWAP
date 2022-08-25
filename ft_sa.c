/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:01:18 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/25 18:39:44 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void  ft_sa(t_stack a, int argc)
{
	int		rows;
	t_stack	t;

	rows = 0;
	t.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!t.numbers)
		free(t.numbers);
//	ft_printf("Valor de a: %d\n", a.numbers[0][0]);
	while (rows < (argc - 2))
	{
//		ft_printf("hola\n");
		ft_printf("En el sa el a.numbers[0] es : %d\n", a.numbers[0][0]);
		ft_printf("Valor de t.numbers: %d\n", t.numbers[0]);
		t.numbers[rows] = a.numbers[rows];
		ft_printf("Valor de t.numbers: %d\n", t.numbers[0]);
		a.numbers[rows] = a.numbers[rows + 1];
		a.numbers[rows + 1] = t.numbers[rows];
		rows++;
	}
	ft_printf("sa\n");
}

