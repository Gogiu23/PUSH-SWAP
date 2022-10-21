/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:51:25 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/21 08:55:57 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_pb_bonus(t_stack *a, t_stack *b)
{
	long	rows;
	int		i;

	i = b->lenght;
	rows = b->lenght;
	if (b->lenght >= 0)
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
		ft_remode_stacka_bonus(*a);
	a->lenght--;
}

t_stack	ft_remode_stacka_bonus(t_stack a)
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
