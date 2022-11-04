/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:24:51 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/04 01:15:31 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_sb_bonus(t_stack *b)
{
	int		columns;
	int		rows;
	long	temp[2];

	rows = 0;
	columns = 0;
	if (b->lenght > 1)
	{
		temp[0] = b->numbers[0][0];
		temp[1] = b->numbers[0][1];
		b->numbers[0][0] = b->numbers[1][0];
		b->numbers[0][1] = b->numbers[1][1];
		b->numbers[1][0] = temp[0];
		b->numbers[1][1] = temp[1];
	}
	else
		return ;
}
