/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:48:34 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 04:58:50 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_pa_bonus(t_stack *a, t_stack *b)
{
	long	rows;
	int		i;

	i = a->lenght;
	rows = a->lenght;
	if (a->lenght >= 0)
	{
		while (i-- > 0)
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
		ft_remode_stackb_bonus(b);
	b->lenght--;
}

void	ft_remode_stackb_bonus(t_stack *b)
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
