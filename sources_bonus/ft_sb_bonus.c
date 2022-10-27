/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:24:51 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/27 05:09:37 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_sb_bonus(t_stack *b)
{
	long	temp;

	temp = b->numbers[0][0];
	b->numbers[0][0] = b->numbers[1][0];
	b->numbers[1][0] = temp;
}
