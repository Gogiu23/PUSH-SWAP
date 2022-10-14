/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smart_rotate_plus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:26:34 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/11 21:27:40 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_smart_rotate_plus_b(t_stack *a, t_stack *b, int rows)
{
	int	i;
	int	count;

	count = b->lenght - 1;
	i = rows;
	if (rows >= (b->lenght / 2))
		ft_go_down(a, b, i);
	if (rows > 0 && rows < (b->lenght / 2))
		ft_go_up(a, b, i);
}

void	ft_go_down(t_stack *a, t_stack *b, int i)
{
	int	count;

	count = b->lenght - 1;
	while (i++ <= (b->lenght))
	{
		if (b->numbers[0] && b->numbers[0][1] >= count - 1)
		{
			ft_pa(a, b);
			i--;
		}
		else
			ft_rrb(b);
	}
}

void	ft_go_up(t_stack *a, t_stack *b, int i)
{
	int	count;

	count = b->lenght - 1;
	while (i -- > 0)
	{
		if (b->numbers[0][1] >= count - 1)
			ft_pa(a, b);
		else
			ft_rb(b);
	}
}
