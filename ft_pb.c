/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:23:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/05 20:19:04 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_pb(t_stack a, t_stack b, int argc, int counter)
{
	int	  rows;
	int	  count;

	rows = 0;
	ft_printf("Entramos en el pb\n");
	
	count = (argc - 3);
	if (b.numbers[rows])
		b.numbers[rows + 1] = b.numbers[rows];
	ft_printf("Valor de counter: %d\n", counter);
	b.numbers[rows] = a.numbers[counter];
	while (count >= 0)
	{
		ft_printf("Entramos en el pb\n");
		a.numbers[count] = a.numbers[count + 1];
		count--;
	}
	ft_printf("pb\n");
}
