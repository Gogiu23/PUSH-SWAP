/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:43:04 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 05:05:15 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rra_bonus(t_stack *a)
{
	int		rows;
	int		i;
	long	temp[2];

	i = (a->lenght - 1);
	rows = a->lenght;
	temp[0] = a->numbers[i][0];
	temp[1] = a->numbers[i][1];
	while (rows > 0)
	{
		if (i > 0)
		{
			a->numbers[i][0] = a->numbers[i - 1][0];
			a->numbers[i][1] = a->numbers[i - 1][1];
			i--;
		}
		rows--;
	}
	rows = 0;
	a->numbers[rows][0] = temp[0];
	a->numbers[rows][1] = temp[1];
}
