/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:24:51 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/21 08:57:45 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_sb_bonus(t_stack b)
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
}
