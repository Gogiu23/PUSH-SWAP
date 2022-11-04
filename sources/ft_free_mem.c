/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/04 10:37:28 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

int	ft_free(t_stack *a, int argc)
{
	while (argc > 0)
	{
		free(a->numbers[argc]);
		argc--;
	}
	free(a->numbers);
	return (0);
}

void	ft_free_stacks_a(t_stack *a)
{
	while (a->lenght >= 0)
	{
		free(a->numbers[a->lenght]);
		a->lenght--;
	}
	free(a->numbers);
	a->numbers = NULL;
}

void	ft_free_stacks_b(t_stack *b)
{
	while (b->lenght > 0)
	{
		free(b->numbers[b->lenght]);
		b->lenght--;
	}
	free(b->numbers);
	free(b);
	b->numbers = NULL;
}
