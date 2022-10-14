/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smart_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:09:11 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/11 21:31:26 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

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
