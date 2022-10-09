/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smart_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:09:11 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/09 13:50:47 by gdominic         ###   ########.fr       */
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

void	ft_smart_rotate_plus_b(t_stack *a, t_stack *b, int rows, int count)
{
	int	i;

	i = rows;
	ft_printf("Valor de count: %d\n", count);
	if (rows >= (b->lenght / 2))
	{
		while (i <= (b->lenght - 1))
		{
			if (b->numbers[0][1] == (count - 1))
			{
				ft_pa(a, b);
			//	i++;
			}
			else
				ft_rrb(b);
			i++;
		}
	}
	else
	{
		while (i >= 0)
		{
			if (b->numbers[0][1] == (count - 1))
			{
				ft_pa(a, b);
			//	i++;
			}
			ft_rb(b);
			i--;
		}
	}	
}
