/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:01:18 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/02 05:56:41 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sa(t_stack a)
{
	int		rows;
	t_stack	t;

	rows = 0;
	t.numbers = (long **)malloc(sizeof(long *));
	if (!t.numbers)
		free(t.numbers);
	t.numbers[rows] = &a.numbers[rows][0];
	ft_printf("Valor de t.numbers: %d\n", t.numbers[0][0]);
	a.numbers[rows][0] = a.numbers[rows + 1][0];
	ft_printf("a.numbers en sa: %d\n", a.numbers[0][0]);
	a.numbers[rows + 1] = &t.numbers[rows][0];
	ft_printf("a.numbers: %d\n", a.numbers[1][0]);
	ft_printf("sa\n");
}
