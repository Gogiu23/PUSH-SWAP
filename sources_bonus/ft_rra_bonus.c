/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:43:04 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/21 08:56:57 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rra_bonus(t_stack *a)
{
	int		rows;
	long	*temp;
	int		i;

	i = (a->lenght - 1);
	rows = a->lenght;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	temp = a->numbers[i];
	while (rows > 0)
	{
		if (i > 0)
		{
			a->numbers[i] = a->numbers[i - 1];
			i--;
		}
		rows--;
	}
	rows = 0;
	a->numbers[rows] = temp;
}
