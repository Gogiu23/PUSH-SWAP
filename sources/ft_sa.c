/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:01:18 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 21:48:14 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_sa(t_stack *a)
{
	int		columns;
	int		rows;
	long	temp[2];

	rows = 0;
	columns = 0;
	temp[0] = a->numbers[0][0];
	temp[1] = a->numbers[0][1];
	a->numbers[0][0] = a->numbers[1][0];
	a->numbers[0][1] = a->numbers[1][1];
	a->numbers[1][0] = temp[0];
	a->numbers[1][1] = temp[1];
	ft_printf("sa\n");
}
