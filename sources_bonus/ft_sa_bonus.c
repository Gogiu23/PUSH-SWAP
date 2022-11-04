/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:36:03 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/04 01:10:17 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_sa_bonus(t_stack *a)
{
	int		columns;
	int		rows;
	long	temp[2];

	rows = 0;
	columns = 0;
	if (a->lenght > 1)
	{
		temp[0] = a->numbers[0][0];
		temp[1] = a->numbers[0][1];
		a->numbers[0][0] = a->numbers[1][0];
		a->numbers[0][1] = a->numbers[1][1];
		a->numbers[1][0] = temp[0];
		a->numbers[1][1] = temp[1];
	}
	else
		return ;
}
