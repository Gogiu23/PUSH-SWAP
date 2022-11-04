/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:36:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/04 11:43:19 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

int	ft_free_bonus(t_stack *a)
{
	while (a->lenght >= 0)
	{
		free(a->numbers[a->lenght]);
		a->lenght--;
	}
	free(a->numbers);
	return (0);
}

void	ft_free_stacks_a_bonus(t_stack *a)
{
	while (a->lenght >= 0)
	{
		free(a->numbers[a->lenght]);
		a->lenght--;
	}
	free(a->numbers);
	free(a);
	a->numbers = NULL;
}

void	ft_free_stacks_b_bonus(t_stack *b)
{
	while (b->lenght >= 0)
	{
		free(b->numbers[b->lenght]);
		b->lenght--;
	}
	free(b->numbers);
	free(b);
	b->numbers = NULL;
}
