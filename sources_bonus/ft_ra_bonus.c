/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:41:14 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/19 15:43:52 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_ra_bonus(t_stack *a)
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
	ft_printf("ra\n");
}
