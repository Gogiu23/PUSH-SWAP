/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:15:00 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 19:03:33 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_rb(t_stack *b)
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
	ft_printf("rb\n");
}
