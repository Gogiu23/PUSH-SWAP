/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:23:28 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 19:23:59 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	ft_sb(t_stack *b)
{
	long	temp;

	temp = b->numbers[0][0];
	b->numbers[0][0] = b->numbers[1][0];
	b->numbers[1][0] = temp;
	ft_printf("sb\n");
}
