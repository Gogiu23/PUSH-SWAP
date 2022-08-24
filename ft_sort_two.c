/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:19:56 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/24 21:08:39 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void  ft_sort_two(t_stack a)
{
	int	count;

	count = 1;
	while (a.numbers[count])
	{
		if (a.numbers[count] < a.numbers[count + 1])
			exit (1);
		else
		{
			ft_sa(a);
		}
		count++;
	}
}
