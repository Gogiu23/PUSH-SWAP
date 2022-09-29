/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:01:04 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/29 11:03:45 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_show_stack(t_stack *a, t_stack *b)
{

	int count;
	int count2;


	count = 0;
	count2 = 0;
	while (count < b->lenght)
	{
		ft_printf("valor despues de ser ordenado = b->numbers[%d]: %d\t%d\n", count, b->numbers[count][0], b->numbers[count][1]);
		count2++;
		count++;
	}
	ft_printf("==========================================================\n");
	count = 0;
	count2 = 1;
	while (count < (a->lenght))
	{
		ft_printf("valor despues de ser ordenado = a->numbers[%d][%d]: %d\t%d\n", count, count2, a->numbers[count][0], a->numbers[count][1]);
		count++;
	}
	ft_printf("==========================================================\n");
}
