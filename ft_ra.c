/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 03:53:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/17 20:28:36 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_ra(t_stack *a, int argc)
{
	int		rows;
	int		columns;
	int		max;
	long	*temp;

	columns = 0;
	argc = 1;
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
