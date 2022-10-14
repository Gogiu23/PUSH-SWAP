/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:01:18 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/11 19:25:50 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_sa(t_stack *a)
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
	ft_printf("sa\n");
}
