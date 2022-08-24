/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:40:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/24 20:59:09 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void  ft_sa(t_stack a)
{
	int		count;
	t_stack	t;

	count = 0;
	t.numbers = 0;

	while (a.numbers[count])
	{
		a.numbers[count] = t.numbers[count];
		a.numbers[count] = a.numbers[count + 1];
		a.numbers[count + 1] = t.numbers[count];
		count++;
	}
	ft_printf("sa\n");
}

