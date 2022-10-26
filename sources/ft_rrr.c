/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:30:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 19:17:01 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_rrr(t_stack *a, t_stack *b)
{
	int		rows;
	long	temp[2];
	int		i;

	i = (a->lenght - 1);
	rows = a->lenght;
	temp[0] = a->numbers[i][0];
	temp[1] = a->numbers[i][1];
	while (rows > 0)
	{
		a->numbers[i][0] = a->numbers[i - 1][0];
		a->numbers[i][1] = a->numbers[i - 1][1];
		rows--;
		i--;
	}
	rows = 0;
	a->numbers[rows][0] = temp[0];
	a->numbers[rows][1] = temp[1];
	ft_second_rrr(*b);
	ft_printf("rrr\n");
}

void	ft_second_rrr(t_stack b)
{
	int		rows;
	long	temp[2];
	int		i;

	i = (b.lenght - 1);
	rows = b.lenght;
	temp[0] = b.numbers[i][0];
	temp[1] = b.numbers[i][1];
	while (rows > 0)
	{
		b.numbers[i][0] = b.numbers[i - 1][0];
		b.numbers[i][1] = b.numbers[i - 1][1];
		rows--;
		i--;
	}
	rows = 0;
	b.numbers[rows][0] = temp[0];
	b.numbers[rows][1] = temp[1];
}
