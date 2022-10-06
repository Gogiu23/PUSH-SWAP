/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:01:18 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/06 22:41:51 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sa(t_stack a)
{
	int		columns;
	int		rows;
	long	*temp;

	rows = 0;
	columns = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	*temp = a.numbers[rows][columns];
	a.numbers[rows][columns] = a.numbers[rows + 1][columns];
	a.numbers[rows + 1][columns] = *temp;
	ft_printf("sa\n");
}
