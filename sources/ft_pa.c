/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:00 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/04 01:50:32 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_pa(t_stack *a, t_stack *b)
{
	long	rows;
	int		i;

	i = a->lenght;
	rows = a->lenght;
	if (a->lenght >= 0)
	{
		while (rows >= 1)
		{
			a->numbers[rows][0] = a->numbers[rows - 1][0];
			a->numbers[rows][1] = a->numbers[rows - 1][1];
			rows--;
		}
	}
	a->lenght++;
	rows = 0;
	a->numbers[rows][0] = b->numbers[rows][0];
	a->numbers[rows][1] = b->numbers[rows][1];
	if (b->lenght > 0)
		ft_remode_stackb(b);
	ft_printf("pa\n");
	b->lenght--;
}

void	ft_remode_stackb(t_stack *b)
{
	int	rows;
	int	i;

	i = 0;
	rows = 0;
	while (i < b->lenght - 1)
	{
		b->numbers[rows][0] = b->numbers[rows + 1][0];
		b->numbers[rows][1] = b->numbers[rows + 1][1];
		rows++;
		i++;
	}
}
