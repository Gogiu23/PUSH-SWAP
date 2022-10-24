/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:36:03 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/24 16:17:40 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_sa_bonus(t_stack *a)
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
	free(temp[0]);
	free(temp[1]);
	free(temp);
}
