/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 03:53:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/03 00:52:10 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_ra(t_stack a, int argc)
{
	int		rows;
	int		columns;
	int		max;
	long	*temp;

	columns = 0;
	max = (argc - 2);
	rows = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	*temp = a.numbers[rows][columns];
	while (rows < max)
	{
		a.numbers[rows][columns] = a.numbers[rows + 1][columns];
		rows++;
	}
	a.numbers[rows][columns] = *temp;
	ft_printf("ra\n");
}
