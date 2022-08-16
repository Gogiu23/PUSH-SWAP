/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_ints.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/11 01:33:21 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_checks_ints(t_values pt1, int argc)
{
	int	i;

	i = 0;
	while (i < (argc - 1))
	{
		if (pt1.numbers[i][0] < (INT_MIN) || pt1.numbers[i][0] > (INT_MAX))
		{
			ft_error("\n\tError\n");
		}
		i++;
	}
}
