/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:49:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/04 16:24:35 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_till_hundred(t_stack *a, t_stack *b)
{
	int		full_lenght;
	int		rows;
	int		count;
	int		counter;

	counter = 0;
	rows = 0;
	full_lenght = 0;
//	ft_print_stack(a, b);
	while (a->lenght > 0)
	{
		count = (a->lenght / 4);
		rows = 0;
		//ft_printf("Valor de count dentro del while cuando movemos al stack b: %d\n", count);
		while (count >= 0 && a->lenght > 0)
		{
			//ft_printf("Valor de count dentro del segundo while cuando movemos al stack b: %d\n", count);
			//ft_printf("Valor de rows dentro del segundo while cuando movemos al stack b: %d\n", rows);
		//	ft_printf("Valor de a->numbers[0][1]: %d\n", a->numbers[0][1]);
//			ft_print_stack(a, b);
			if (a->lenght > 0 && a->numbers[rows][1] <= count)
			{
				//ft_printf("Hola porque no entramos?\n");
				ft_smart_rotate_a(a, rows);
				ft_pb(a, b);
				rows = 0;
//				ft_print_stack(a, b);
				count--;
				ft_assign_alias_a(a);
				counter++;
			}
			else
				rows++;
		}
//		full_lenght++;
	}
	ft_printf("Valor de counter: %d\n", counter);
	ft_coming_back(a, b);
}

void	ft_coming_back(t_stack *a, t_stack *b)
{
	int	  max;
	int	  count;

	ft_assign_alias_b(b);
	count = (b->lenght - 1);
	//ft_printf("Valor de count: %d\n", count);
	max = (b->lenght);
	//ft_printf("Valor de max: %d\t Valor de b->lenght: %d\n", max, b->lenght);
//	ft_print_stack(a, b);
	while (b->lenght > 0)
	{
		while (max > 0)
		{
			////ft_printf("Valor de b->numbers[max][1]: %d\n", b->numbers[max - 1][1]);
			//ft_printf("Valor de count: %d\n", count);
			if (b->numbers[0][1] == count || b->numbers[max - 1][1] == count)
			{
				if (b->numbers[0][1] == count)
				{
					ft_pa(a, b);
					count--;
					max--;
				}
				if (b->numbers[max - 1][1] == count)
				{
					ft_rrb(b);
					ft_pa(a, b);
					max--;
					count--;
				}
//				ft_print_stack(a, b);
			}
			else
				ft_rb(b);
			//ft_printf("Valor de max: %d\t Valor de b->lenght: %d\n", max, b->lenght);
		//	max--;
		}
	}
}
