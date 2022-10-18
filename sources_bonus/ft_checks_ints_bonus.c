/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_ints_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:22:03 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/18 12:23:19 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_checks_ints_bonus(t_stack a, int argc)
{
	int	i;

	i = 0;
	while (i < (argc - 1))
	{
		if (a.numbers[i][0] < (INT_MIN) || a.numbers[i][0] > (INT_MAX))
			ft_error_bonus("Error\n");
		i++;
	}
}
