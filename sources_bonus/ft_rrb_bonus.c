/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:44:27 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/28 13:01:08 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rrb_bonus(t_stack *b)
{
	int		rows;
	long	temp[2];
	int		i;

	if (b->lenght > 0)
	{	
		i = (b->lenght - 1);
		rows = b->lenght;
		temp[0] = b->numbers[i][0];
		temp[1] = b->numbers[i][1];
		while (rows -- > 0)
		{
			if (i > 0)
			{
				b->numbers[i][0] = b->numbers[i - 1][0];
				b->numbers[i][1] = b->numbers[i - 1][1];
				i--;
			}
		}
		rows = 0;
		b->numbers[rows][0] = temp[0];
		b->numbers[rows][1] = temp[1];
	}
	else
		write(1, "Not a movement valid, no changes in stacks\n", 43);
}
