/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:33:11 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 01:27:38 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_rr(t_stack *a, t_stack *b)
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
	ft_second_rr(*b);
	ft_printf("rr");
	free(temp);
}

void	ft_second_rr(t_stack b)
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
	free(temp);
}
