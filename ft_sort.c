/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 04:51:29 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/03 00:58:49 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_two(t_stack a, int argc)
{
	int	count;

	count = 0;
	while (count < (argc -2))
	{
		if (a.numbers[count][0] < a.numbers[count + 1][0])
			exit (1);
		else
		{
			ft_sa(a);
		}
		count++;
	}
}

void	ft_sort_three(t_stack a, int argc)
{
	int	count;

	count = 0;
	if (a.numbers[count][1] == 1 && a.numbers[count + 2][1] == 2)
		ft_sa(a);
	if (a.numbers[count][1] == 2 && a.numbers[count + 2][1] == 1)
		ft_ra(a, argc);
	if (a.numbers[count][1] == 2 && a.numbers[count + 1][1] == 1)
	{
		ft_ra(a, argc);
		ft_sa(a);
	}
	if (a.numbers[count][1] == 1 && a.numbers[count + 1][1] == 2)
	{
		ft_ra(a, argc);
		ft_ra(a, argc);
	}
	if (a.numbers[count][1] == 0)
	{
		ft_ra(a, argc);
		ft_ra(a, argc);
		ft_sa(a);
	}
}
