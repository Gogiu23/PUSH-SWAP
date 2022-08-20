/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_ints.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:27:32 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/20 21:31:10 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_checks_ints(t_values pt1, int argc)
{
	int	i;

	i = 1;
	while (i < (argc - 1))
	{
		if (pt1.numbers[i][0] < (INT_MIN) || pt1.numbers[i][0] > (INT_MAX))
			ft_error("Error\n");
		else if (pt1.numbers[i][0] == 0)
			ft_error("Errore\n");
		i++;
	}
}
