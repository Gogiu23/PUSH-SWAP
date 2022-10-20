/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:44:27 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/20 18:45:15 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rrb_bonus(t_stack *b)
{
	int		rows;
	long	*temp;
	int		i;

	i = (b->lenght - 1);
	rows = b->lenght;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	temp = b->numbers[i];
	while (rows > 0)
	{
		if (i > 0)
		{
			b->numbers[i] = b->numbers[i - 1];
			i--;
		}
		rows--;
	}
	rows = 0;
	b->numbers[rows] = temp;
	ft_printf("rrb\n");
}
