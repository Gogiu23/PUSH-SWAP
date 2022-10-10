/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:01:18 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/10 14:22:45 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sa(t_stack *a)
{
	int		columns;
	int		rows;
	long	**temp;

	rows = 0;
	ft_printf("XD\n");
	columns = 0;
	temp = (long **)malloc(sizeof(long *) * 2);
	if (!temp)
		free(temp);
	ft_printf("XD\n");
	ft_printf("Valor de temp: %d\n", temp[rows]);
	temp[0] = (long *)malloc(sizeof(long) * 2);
	if (!temp[rows])
			free(temp);
	ft_printf("XD\n");
	temp[0] = a->numbers[0];
	ft_printf("Valor de temp: %d\n", temp[rows][columns]);
//	ft_printf("Valor de temp: %d\n", temp[rows]);
	a->numbers[0] = a->numbers[1];
	a->numbers[1] = temp[0];
	ft_printf("sa\n");
}
