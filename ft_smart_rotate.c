/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smart_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:09:11 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/10 22:01:28 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_smart_rotate_a(t_stack *a, int rows)
{
	int	i;

	i = rows;
	if (rows >= (a->lenght / 2))
	{
		while (i <= (a->lenght - 1))
		{
			ft_rra(a);
			i++;
		}
	}
	else
	{
		while (i -- > 0)
			ft_ra(a);
	}	
}

void	ft_smart_rotate_b(t_stack *b, int rows)
{
	int	i;

	i = rows;
	if (rows >= (b->lenght / 2))
	{
		while (i <= (b->lenght - 1))
		{
			ft_rrb(b);
			i++;
		}
	}
	else
	{
		while (i -- > 0)
			ft_rb(b);
	}	
}

void	ft_smart_rotate_plus_b(t_stack *a, t_stack *b, int rows)
{
	int	i;
	int	count;

	count = b->lenght - 1;
	i = rows;
	if (rows >= (b->lenght / 2))
	{
		while (i <= (b->lenght))
		{
			ft_printf("Valor de rows en smart rotate: \t%d, Valor de b->lenght: \t%d, Valor de i: \t%d\n", rows,\
					b->lenght - 1, i);
			if (b->numbers[0][1] >= count - 1)
			{
				ft_pa(a, b);
			ft_printf("Valor de rows en smart rotate: \t%d, Valor de b->lenght: \t%d, Valor de i: \t%d\n", rows,\
					b->lenght - 1, i);
		//		ft_print_stack(a, b);
				//b->lenght++;
				i--;
			}
			else
				ft_rrb(b);
			ft_printf("Valor de rows en smart rotate: \t%d, Valor de b->lenght: \t%d, Valor de i: \t%d\n", rows,\
					b->lenght - 1, i);
			i++;
		}
	}
	if (rows > 0 && rows < (b->lenght / 2))
	{
		while (i -- > 0)
		{
			ft_printf("Valor de rows en smart rotate: \t%d, Valor de b->lenght: \t%d, Valor de i: \t%d\n", rows,\
					b->lenght - 1, i);
			if (b->numbers[0][1] >= count - 1)
			{
				ft_pa(a, b);
				ft_print_stack(a, b);
//				b->lenght++;
			//	i++;
			}
			else
				ft_rb(b);
		}
	}
}
