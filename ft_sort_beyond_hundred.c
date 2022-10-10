/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_beyond_hundred.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:48:16 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/10 00:22:07 by gdominic         ###   ########.fr       */
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
		count = (a->lenght / 8);
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
	int	  	count;
	int		rows;

	rows = 0;
	ft_assign_alias_b(b);
	count = b->lenght;
	while (count >= 0)
	{
		rows = 0;
		count--;
		while (rows < b->lenght)
		{
		//	//ft_print_stack(a, b);
			if (b->numbers[rows][1] == count)
			{
				//ft_printf("Hay un bucle aqui\n");
				ft_smart_rotate_plus_b(a, b, rows, count);
				ft_pa(a, b);
			}
			ft_printf("valor de rows: %d\n", rows);
			ft_printf("Valor de b->lenght: %d\n", b->lenght);
			ft_printf("Valor de count: %d\n", count);
			rows++;
			if (a->lenght > 1 && a->numbers[1][0] < a->numbers[0][0])
				ft_sa(*a);
		}
		ft_printf("valor de rows fuera del while: %d\n", rows);
		ft_printf("Valor de b->lenght fuera del while: %d\n", b->lenght);
		ft_printf("Valor de count fuera del while: %d\n", count);
		ft_print_stack(a, b);
//		ft_assign_alias_a(a);
	}
	//ft_print_stack(a, b);
}
