/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:30:21 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 01:28:27 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_rrr(t_stack *a, t_stack *b)
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
	ft_second_rrr(*b);
	ft_printf("rrr\n");
	free(temp);
}

void	ft_second_rrr(t_stack b)
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
