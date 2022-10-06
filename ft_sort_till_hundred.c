/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:49:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/06 22:52:47 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_till_hundred(t_stack *a, t_stack *b)
{
	int		full_lenght;
	int		rows;
	int		count;

	rows = 0;
	full_lenght = 0;
	while (a->lenght > 0)
	{
		count = (a->lenght / 4);
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
	int	  count;
	int	  rows;

	rows = 0;
	ft_assign_alias_b(b);
	count = (b->lenght - 1);
	while (b->lenght > 0)
	{
		while (count > 0 && b->lenght > 0)
		{
			ft_print_stack(a, b);
			if (count > 0 && b->numbers[rows][1] == (count - 1))
			{
				ft_smart_rotate_b(b, rows);
				ft_pa(a, b);
		//		rows = 0;
			}
			ft_printf("Valor de ccount: %d\n", count);
			if (b->numbers[rows][1] == count)
			{
				ft_smart_rotate_b(b, rows);
				ft_pa(a, b);
				count--;
				rows = 0;
			}
			ft_printf("Valor de ccount: %d\n", count);
//			else
			rows++;
			if (a->lenght > 1 && a->numbers[1][0] < a->numbers[0][0])
				ft_sa(*a);
			ft_print_stack(a, b);
		}
	}
}
