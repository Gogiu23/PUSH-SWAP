/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:11:09 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/25 16:28:17 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_rrb(t_stack *b)
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
		b->numbers[i] = b->numbers[i - 1];
		rows--;
		i--;
	}
	rows = 0;
	b->numbers[rows] = temp;
	free(temp);
	ft_printf("rrb\n");
}
