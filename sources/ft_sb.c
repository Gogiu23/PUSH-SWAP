/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:23:28 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 01:29:20 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_sb(t_stack b)
{
	int		columns;
	int		rows;
	long	*temp;

	rows = 0;
	columns = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		free(temp);
	*temp = b.numbers[rows][columns];
	b.numbers[rows][columns] = b.numbers[rows + 1][columns];
	b.numbers[rows + 1][columns] = *temp;
	ft_printf("sb\n");
	free(temp);
}
