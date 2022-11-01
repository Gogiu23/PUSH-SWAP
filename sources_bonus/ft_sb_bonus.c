/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:24:51 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/01 13:35:02 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_sb_bonus(t_stack *b)
{
	long	temp;

	if (b->lenght > 1)
	{
		temp = b->numbers[0][0];
		b->numbers[0][0] = b->numbers[1][0];
		b->numbers[1][0] = temp;
	}
	else
		write(1, "Not a movement valid, no changes in stacks 👋\n", 49);
}
