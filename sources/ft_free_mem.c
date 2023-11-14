/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/12/01 02:13:00 by gdominic         ###   ########.fr       */
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
	int	nbr;

	nbr = 0;
	while (a->numbers[nbr])
	{
		free(a->numbers[nbr]);
		nbr++;
	}
	free(a->numbers);
}

void	ft_free_stacks_b(t_stack *b)
{
	int	nbr;

	nbr = 0;
	while (b->numbers[nbr])
	{
		free(b->numbers[nbr]);
		nbr++;
	}
	free(b->numbers);
}
