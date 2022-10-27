/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:46:54 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 05:08:23 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rrr_bonus(t_stack *a, t_stack *b)
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
	ft_second_rrr_bonus(*b);
	ft_printf("rrr\n");
}

void	ft_second_rrr_bonus(t_stack b)
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
