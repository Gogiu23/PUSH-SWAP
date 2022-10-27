/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:29:39 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 05:10:04 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_ss_bonus(t_stack *a, t_stack *b)
{
	int		columns;
	int		rows;
	long	**temp;

	rows = 0;
	columns = 0;
	temp = (long **)malloc(sizeof(long *) * 2);
	if (!temp)
		free(temp);
	temp[0] = (long *)malloc(sizeof(long) * 2);
	if (!temp[rows])
		free(temp);
	temp[0] = a->numbers[0];
	a->numbers[0] = a->numbers[1];
	a->numbers[1] = temp[0];
	ft_ss2_bonus(b);
}

void	ft_ss2_bonus(t_stack *b)
{
	int		columns;
	int		rows;
	long	*temp;

	rows = 0;
	columns = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	*temp = b->numbers[rows][columns];
	b->numbers[rows][columns] = b->numbers[rows + 1][columns];
	b->numbers[rows + 1][columns] = *temp;
}
