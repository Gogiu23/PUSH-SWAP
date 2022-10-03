/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:00 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/03 18:25:19 by gdominic         ###   ########.fr       */
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
	if (a->lenght >= 0)
	{
		while (i -- > 0)
		{
			a->numbers[rows] = a->numbers[rows - 1];
			rows--;
		}
	}
	a->lenght++;
	rows = 0;
	a->numbers[rows] = b->numbers[rows];
	if (b->lenght > 0)
		ft_remode_stackb(*b);
	ft_printf("pa\n");
	b->lenght--;
}

t_stack	ft_remode_stackb(t_stack b)
{
	int	rows;
	int	i;

	i = 0;
	rows = 0;
	while (i < b.lenght)
	{
		b.numbers[rows] = b.numbers[rows + 1];
		rows++;
		i++;
	}
	return (b);
}
