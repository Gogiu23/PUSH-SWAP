/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:11:09 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 18:44:44 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_rrb(t_stack *b)
{
	int		rows;
	long	temp[2];
	int		i;

	i = (b->lenght - 1);
	rows = b->lenght;
	temp[0] = b->numbers[i][0];
	temp[1] = b->numbers[i][1];
	while (rows > 0)
	{
		if (i > 0)
		{
			b->numbers[i][0] = b->numbers[i - 1][0];
			b->numbers[i][1] = b->numbers[i - 1][1];
			i--;
		}
		rows--;
	}
	rows = 0;
	b->numbers[rows][0] = temp[0];
	b->numbers[rows][1] = temp[1];
	ft_printf("rrb\n");
}
