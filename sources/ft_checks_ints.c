/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_ints.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:27:32 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/31 19:41:27 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"
#include <limits.h>
#include <stdio.h>

void	ft_checks_ints(t_stack a, int argc)
{
	int	i;

	i = 0;
	printf("aaaa\n");
	while (i < (argc - 1))
	{
		printf("a.numbers[i]: %lu\n", a.numbers[i][0]);
		if (a.numbers[i][0] < (INT_MIN) || a.numbers[i][0] >= (INT_MAX))
			ft_error("Error\n");
		i++;
	}
}
