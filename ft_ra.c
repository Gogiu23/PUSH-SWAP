/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 03:53:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/31 01:58:49 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_ra(t_stack a, int argc)
{
	int		rows;
	int		max;
	t_stack	t;

	max = argc - 2;
	rows = 0;
	t.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!t.numbers)
		free(t.numbers);
	t.numbers[rows] = a.numbers[rows];
	while (rows <= max)
	{
		a.numbers[rows] = a.numbers[rows + 1];
		rows++;
	}
	a.numbers[max] = t.numbers[0];
	ft_printf("ra\n");
}
