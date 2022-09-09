/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:23:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/09 19:39:49 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_pb(t_stack a, t_stack b, int argc)
{
	long	  rows;
	int		  count;
	long	  max;

	max = 0;
	rows = 0;
	ft_printf("Entramos en el pb\n");
	count = (argc - 2);
	b.numbers[rows][0] = a.numbers[rows][0];
	while (rows < count)
	{
//		ft_printf("Entramos en el pb\n");
		a.numbers[rows] = a.numbers[rows + 1];
		rows++;
	}
	ft_printf("Valor de rows: %d\t Valor de argc: %d\n", rows, argc);
	a.numbers[rows] = &max;
	a.numbers[rows][1] = max;
	ft_printf("Valor de a.numbers al final: %d\n", a.numbers[4][0]);
	ft_printf("pb\n");
	ft_printf("==========================================================\n");
	//ft_printf("error aqui?\n");
}
