/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:34:05 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/04 14:35:03 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_print_stack(t_stack *a, t_stack *b)
{
	int	count;

	count = 0;
	while (count < a->lenght)
	{
		ft_printf("valor antes de ser ordenado = a->numbers[%d][%d]: %d\t%d\n"\
			, count, 1, a->numbers[count][0], a->numbers[count][1]);
		count++;
	}
	ft_printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	count = 0;
	while (count++ < b->lenght)
	{
		ft_printf("valor despues de ser ordenado = b->numbers[%d]: %d\t%d\n", \
			count, b->numbers[count][0], b->numbers[count][1]);
	}
	count = 0;
	ft_printf("A.lenght: %d\nValor de b->lenght: %d\n", a->lenght, b->lenght);
	ft_printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	while (count < a->lenght)
	{
		ft_printf("valor despues de ser ordenado = a.numbers[%d][%d]: %d\t%d\n", \
			count, 1, a->numbers[count][0], a->numbers[count][1]);
		count++;
	}
}
