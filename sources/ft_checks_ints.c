/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_ints.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:27:32 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/21 20:32:51 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_checks_ints(t_stack a, int argc)
{
	int	i;

	i = 0;
	while (i < (argc - 1))
	{
		if (a.numbers[i][0] < (INT_MIN) || a.numbers[i][0] > (INT_MAX))
			ft_error("Error\n");
		i++;
	}
}
