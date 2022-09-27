/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:23:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/27 22:50:11 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_pb(t_stack *a, t_stack *b)
{
	long	rows;
	int		i;

	i = b->lenght;
	rows = b->lenght;
	if (b->lenght > 0)
	{
		while (i -- > 0)
		{
			b->numbers[rows] = b->numbers[rows - 1];
			rows--;
		}
	}
	b->lenght++;
	rows = 0;
	b->numbers[rows] = a->numbers[rows];
	if (a->lenght > 0)
		ft_remode_stacka(*a);
	ft_printf("pb\n");
	a->lenght--;
}

t_stack	ft_remode_stacka(t_stack a)
{
	int	rows;
	int	i;

	i = 0;
	rows = 0;
	while (i < a.lenght)
	{
		a.numbers[rows] = a.numbers[rows + 1];
		rows++;
		i++;
	}
	return (a);
}
