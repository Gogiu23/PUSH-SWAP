/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:49:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/11 19:21:35 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_sort_till_hundred(t_stack *a, t_stack *b)
{
	int		rows;
	int		count;

	while (a->lenght > 0)
	{
		count = (a->lenght / 3);
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
	ft_coming_back(a, b);
}

void	ft_coming_back(t_stack *a, t_stack *b)
{
	int	rows;
	int	count;

	ft_assign_alias_b(b);
	while (b->lenght > 0)
	{
		count = b->lenght - 1;
		rows = 0;
		while (rows < b->lenght)
		{
			if (b->lenght > 0 && b->numbers[rows][1] == count)
			{
				ft_smart_rotate_plus_b(a, b, rows);
				if (b->lenght > 0 && b->numbers[0][1] >= count - 1)
					ft_pa(a, b);
				if (a->lenght > 1 && a->numbers[1][0] < a->numbers[0][0])
				{
					ft_sa(a);
				}
			}
			rows++;
		}
	}
}
