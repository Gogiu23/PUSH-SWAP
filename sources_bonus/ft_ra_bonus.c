/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:41:14 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 04:58:39 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_ra_bonus(t_stack *a)
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
}
