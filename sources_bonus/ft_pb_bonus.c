/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:51:25 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 04:58:59 by gdominic         ###   ########.fr       */
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
			b->numbers[rows][0] = b->numbers[rows - 1][0];
			b->numbers[rows][1] = b->numbers[rows - 1][1];
			rows--;
		}
	}
	b->lenght++;
	rows = 0;
	b->numbers[rows][0] = a->numbers[rows][0];
	b->numbers[rows][1] = a->numbers[rows][1];
	if (a->lenght > 0)
		ft_remode_stacka_bonus(a);
	a->lenght--;
}

void	ft_remode_stacka_bonus(t_stack *a)
{
	int	rows;
	int	i;

	i = 0;
	rows = 0;
	while (i < a->lenght - 1)
	{
		a->numbers[rows][0] = a->numbers[rows + 1][0];
		a->numbers[rows][1] = a->numbers[rows + 1][1];
		rows++;
		i++;
	}
}
