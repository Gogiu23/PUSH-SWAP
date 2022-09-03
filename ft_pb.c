/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 04:23:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/03 01:24:55 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_pb(t_stack a, t_stack b, int argc)
{
	int	rows;

	rows = 0;
	b.numbers[0][0] = a.numbers[rows][0];
	while (rows < (argc - 1))
	{
		a.numbers[rows][0] = a.numbers[rows + 1][0];
		rows++;
	}
}
