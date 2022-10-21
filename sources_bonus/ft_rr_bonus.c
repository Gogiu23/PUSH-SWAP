/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:40:52 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/21 08:56:43 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rr_bonus(t_stack *a, t_stack *b)
{
	int		rows;
	int		columns;
	int		max;
	long	*temp;

	columns = 0;
	max = (a->lenght - 1);
	rows = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	temp = a->numbers[rows];
	while (rows < max)
	{
		a->numbers[rows] = a->numbers[rows + 1];
		rows++;
	}
	a->numbers[rows] = temp;
	ft_second_rr_bonus(*b);
}

void	ft_second_rr_bonus(t_stack b)
{
	int		rows;
	int		columns;
	int		max;
	long	*temp;

	columns = 0;
	max = (b.lenght - 1);
	rows = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	temp = b.numbers[rows];
	while (rows < max)
	{
		b.numbers[rows] = b.numbers[rows + 1];
		rows++;
	}
	b.numbers[rows] = temp;
}
