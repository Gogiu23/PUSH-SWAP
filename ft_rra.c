/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:09:40 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/26 13:41:55 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_rra(t_stack *a)
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
		a->numbers[i] = a->numbers[i - 1];
		rows--;
		i--;
	}
	rows = 0;
	a->numbers[rows] = temp;
	ft_printf("rra\n");
}