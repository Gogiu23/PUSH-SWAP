/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_beyond_hundred.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:48:16 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/07 13:57:26 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void		ft_sort_beyond_hundred(t_stack *a, t_stack *b)
{
	int		rows;
	int		count;

	while (a->lenght > 0)
	{
		count = (a->lenght / 6);
		rows = 0;
		while (count >= 0 && a->lenght > 0)
		{
			if (a->lenght > 0 && a->numbers[rows][1] <= count)
			{
				ft_smart_rotate_a(a, rows);
				ft_pb(a, b);
				if (b->numbers[0][1] < (count / 2))
					ft_rb(b);
				rows = 0;
				count--;
				ft_assign_alias_a(a);
			}
			else
				rows++;
		}
	}
	ft_coming_back_again(a, b);
}

void	ft_coming_back_again(t_stack *a, t_stack *b)
{
	long	count;
	int		rows;

	rows = 0;
	ft_assign_alias_b(b);
	count = b->lenght;
	while (b->lenght > 0)
	{
		rows = 0;
		count--;
		while (rows < b->lenght)
		{
			if (b->numbers[rows][1] >= (count - 1))
			{
				ft_smart_rotate_b(b, rows);
				ft_pa(a, b);
			}
			else
				rows++;
		}
		if (a->lenght > 1 && a->numbers[1][0] < a->numbers[0][0])
			ft_sa(*a);
	}
}
