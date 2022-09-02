/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 04:51:29 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/02 20:07:00 by gdominic         ###   ########.fr       */
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

void	ft_sort_three(t_stack a, /*t_stack b,*/ int argc)
{
	int	count;

	count = 0;
	if (a.numbers[count][1] == 1 && a.numbers[count + 2][1] == 2)//sequencia 2 1 3 FUNCIONA
		ft_sa(a);
	if (a.numbers[count][1] == 2 && a.numbers[count + 2][1] == 1)//sequencia 3 1 2 NO FUNCIONA
		ft_ra(a, argc);
	if (a.numbers[count][1] == 2 && a.numbers[count + 1][1] == 1)//sequencia 3 2 1 FUNCIONA
	{
		ft_ra(a, argc);
		ft_sa(a);
	}
	if (a.numbers[count][1] == 1 && a.numbers[count + 1][1] == 2)//sequencia 2 3 1 NO FUNCIONA
	{
		ft_ra(a, argc);
		ft_ra(a, argc);
	}
	if (a.numbers[count][1] == 0)//sequencia 1 3 2 FUNCIONA
	{
		ft_ra(a, argc);
		ft_ra(a, argc);
		ft_sa(a);
	}
}
