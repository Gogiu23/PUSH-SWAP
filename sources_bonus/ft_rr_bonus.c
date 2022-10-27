/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:40:52 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 05:04:30 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rr_bonus(t_stack *a, t_stack *b)
{
	int		rows;
	int		columns;
	int		max;
	long	temp[2];

	columns = 0;
	max = (a->lenght - 1);
	rows = 0;
	temp[0] = a->numbers[rows][0];
	temp[1] = a->numbers[rows][1];
	while (rows < max)
	{
		a->numbers[rows][0] = a->numbers[rows + 1][0];
		a->numbers[rows][1] = a->numbers[rows + 1][1];
		rows++;
	}
	a->numbers[rows][0] = temp[0];
	a->numbers[rows][1] = temp[1];
	ft_second_rr_bonus(*b);
}

void	ft_second_rr_bonus(t_stack b)
{
	int		rows;
	int		columns;
	int		max;
	long	temp[2];

	columns = 0;
	max = (b.lenght - 1);
	rows = 0;
	temp[0] = b.numbers[rows][0];
	temp[1] = b.numbers[rows][1];
	while (rows < max)
	{
		b.numbers[rows][0] = b.numbers[rows + 1][0];
		b.numbers[rows][1] = b.numbers[rows + 1][1];
		rows++;
	}
	b.numbers[rows][0] = temp[0];
	b.numbers[rows][1] = temp[1];
}
