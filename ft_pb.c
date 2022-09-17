/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:23:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/17 18:24:40 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_pb(t_stack *a, t_stack b, int argc)
{
	long	  rows;
	long	  max;
	int		  i;

	i = b.lenght;
	max = 0;
	rows = 0;
	ft_printf("Entramos en el pb\n");
	if (i != 0)
	{
		while (i >= 0)
		{
			b.sstack[rows + 1] = b.sstack[rows];
			i--;
		}
	}
	b.sstack[rows] = a->numbers[rows][0];
	a->lenght--;
	while (rows < (argc - 2))
	{
//		ft_printf("Entramos en el pb\n");
		a->numbers[rows] = a->numbers[rows + 1];
		rows++;
	}
	ft_printf("Valor de rows: %d\t Valor de argc: %d\n", rows, argc);
	a->numbers[rows] = &max;
	a->numbers[rows][1] = max;
	b.lenght++;
	ft_printf("el valor de a.lenght es: %d\n", a->lenght);
	ft_printf("El valor de b.lenght en el pb: %d\n", b.lenght);
	ft_printf("Valor de a->numbers al final: %d\n", a->numbers[4][0]);
	ft_printf("pb\n");
	ft_printf("==========================================================\n");
	//ft_printf("error aqui?\n");
}
