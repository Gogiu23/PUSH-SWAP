/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:46:54 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/21 08:57:25 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_rrr_bonus(t_stack *a, t_stack *b)
{
	int		rows;
	long	*temp;
	int		i;

	i = (a->lenght - 1);
	rows = a->lenght;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	temp = a->numbers[i];
	while (rows > 0)
	{
		a->numbers[i] = a->numbers[i - 1];
		rows--;
		i--;
	}
	rows = 0;
	a->numbers[rows] = temp;
	free(temp);
	ft_second_rrr_bonus(*b);
}

void	ft_second_rrr_bonus(t_stack b)
{
	int		rows;
	long	*temp;
	int		i;

	i = (b.lenght - 1);
	rows = b.lenght;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	temp = b.numbers[i];
	while (rows > 0)
	{
		b.numbers[i] = b.numbers[i - 1];
		rows--;
		i--;
	}
	rows = 0;
	b.numbers[rows] = temp;
	free(temp);
}
