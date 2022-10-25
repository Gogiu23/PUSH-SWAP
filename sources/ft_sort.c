/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 04:51:29 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/25 15:51:58 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_sort_two(t_stack *a)
{
	int	count;

	count = 0;
	if (a->numbers[count][0] < a->numbers[count + 1][0])
		exit (1);
	else
		ft_sa(a);
	exit (0);
}

void	ft_sort_three(t_stack *a)
{
	int	count;

	count = 0;
	if (a->numbers[count][1] == 1 && a->numbers[count + 2][1] == 2)
		ft_sa(a);
	else if (a->numbers[count][1] == 2 && a->numbers[count + 2][1] == 1)
		ft_ra(a);
	else if (a->numbers[count][1] == 2 && a->numbers[count + 2][1] == 0)
	{
		ft_ra(a);
		ft_sa(a);
	}
	else if (a->numbers[count][1] == 1 && a->numbers[count + 2][1] == 0)
	{
		ft_rra(a);
	}
	else if (a->numbers[count][1] == 0 && a->numbers[count + 2][1] == 1)
	{
		ft_rra(a);
		ft_sa(a);
	}
}

void	ft_sort_till_five(t_stack *a, t_stack *b, int i, int argc)
{
	if (argc == 5)
		ft_sort_four(a, b, i);
	else if (argc == 6)
		ft_sort_five(a, b, i);
	exit (0);
}

void	ft_sort_four(t_stack *a, t_stack *b, int i)
{
	int	rows;

	i = 0;
	rows = 0;
	while (rows < a->lenght)
	{
		if (a->numbers[rows][1] == 0)
		{
			i = rows;
			ft_smart_rotate_a(a, rows);
			ft_pb(a, b);
		}
		rows++;
	}
	ft_assign_alias_a(a);
	ft_sort_three(a);
	while (b->lenght > 0)
		ft_pa(a, b);
}

void	ft_sort_five(t_stack *a, t_stack *b, int i)
{
	int	rows;

	i = 0;
	rows = 0;
	while (rows < a->lenght)
	{
		if (a->numbers[rows][1] == 0)
		{
			i = rows;
			ft_smart_rotate_a(a, rows);
			ft_pb(a, b);
		}
		rows++;
	}
	ft_assign_alias_a(a);
	ft_sort_four(a, b, i);
	while (b->lenght > 0)
		ft_pa(a, b);
	exit (0);
}
