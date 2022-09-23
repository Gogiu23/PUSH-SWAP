/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:00 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/24 01:49:04 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft/libft.h"
#include "push_swap.h"

void	ft_pa(t_stack *a, t_stack *b)
{
	long	rows;
	int		i;

	i = a->lenght;
	rows = (a->lenght);
	if (a->lenght != 0)
	{
		while (rows > 0)
		{
			a->numbers[i] = a->numbers[i - 1];
			i--;
			rows--;
		}
		a->lenght++;
	}
	rows = 0;
	a->numbers[0] = b->numbers[0];
	b->numbers[rows] = b->numbers[rows + 1];
	ft_printf("pa\n");
	b->lenght--;
}
