/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:19:56 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/25 21:45:54 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void  ft_sort_two(t_stack a, int argc)
{
	int	count;

	count = 0;
	while (count < (argc -2))
	{
		if (a.numbers[count][0] < a.numbers[count + 1][0])
			exit (1);
		else
		{
			ft_sa(a, argc);
		}
		count++;
	}
}

void  ft_sort_three(t_stack a, int argc)
{
	int count;

	count = 0;
}
