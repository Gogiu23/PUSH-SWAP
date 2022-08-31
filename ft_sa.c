/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:01:18 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/31 02:00:10 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sa(t_stack a, int argc)
{
	int		rows;
	t_stack	t;

	rows = 0;
	t.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!t.numbers)
		free(t.numbers);
	t.numbers[rows] = a.numbers[rows];
	a.numbers[rows] = a.numbers[rows + 1];
	a.numbers[rows + 1] = t.numbers[rows];
	ft_printf("sa\n");
}
