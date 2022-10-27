/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:39:49 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 04:59:42 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rb_bonus(t_stack *b)
{
	int		rows;
	int		columns;
	int		max;
	long	temp[2];

	columns = 0;
	max = (b->lenght - 1);
	rows = 0;
	temp[0] = b->numbers[rows][0];
	temp[1] = b->numbers[rows][1];
	while (rows < max)
	{
		b->numbers[rows][0] = b->numbers[rows + 1][0];
		b->numbers[rows][1] = b->numbers[rows + 1][1];
		rows++;
	}
	b->numbers[rows][0] = temp[0];
	b->numbers[rows][1] = temp[1];
}
