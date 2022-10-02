/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:49:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/02 20:52:16 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_till_hundred(t_stack *a, t_stack *b)
{
	int		full_lenght;

	full_lenght = 0;
	ft_generate_chunks(a);	
	while (a->lenght > 0)
	{
		while (b->lenght < a->intervals[full_lenght])
		{
			if (a->lenght > 0 && a->numbers[0][1] <= a->intervals[full_lenght])
			{
				ft_pb(a, b);
//				ft_printf("Valor de b->numbers: %d\n", b->numbers[0][1]);
//				ft_printf("Valor de a->intervals: %d\n", (a->intervals[full_lenght] / 2));
				if (b->numbers[0][1] > (a->intervals[full_lenght] / 2))
					ft_rb(b);
			}
			else
				ft_ra(a);
		}
		full_lenght++;
	}
	ft_coming_back(a, b);
}

void	ft_coming_back(t_stack *a, t_stack *b)
{
	int	  max;
	int	  count;
	
	count = (b->lenght - 1);
	max = b->lenght;
	while (b->lenght > 0)
	{
		while (max > 0)
		{
			if (b->numbers[0][1] == count)
			{
				ft_pa(a, b);
				count--;
				max--;
			}
			else
				ft_rb(b);
		}
	}
}

void	ft_generate_chunks(t_stack *a)
{
	a->intervals = (long *)malloc(sizeof(long) * 4);
	if (!a->intervals)
		free(a->intervals);
	a->intervals[0] = a->lenght / 4;
	a->intervals[1] = a->lenght / 2;
	a->intervals[2] = ((a->lenght * 3) / 4);
	a->intervals[3] = a->lenght;
}
