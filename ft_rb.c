/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:15:00 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/24 18:18:43 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_rb(t_stack *b)
{
	int		rows;
	int		columns;
	int		max;
	long	*temp;

	columns = 0;
	max = (b->lenght - 1);
	rows = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	temp = b->numbers[rows];
	while (rows < max)
	{
		b->numbers[rows] = b->numbers[rows + 1];
		rows++;
	}
	b->numbers[rows] = temp;
	ft_printf("rb\n");
}
