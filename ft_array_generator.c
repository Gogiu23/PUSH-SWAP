/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_generator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/20 21:33:36 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

t_stack	ft_array_generator(int argc, int i, int count, char **argv)
{
	t_stack	a;

	a.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!a.numbers)
		ft_free(a, argc);
	a.numbers[argc - 1] = 0;
	while (count >= 0)
	{
		a.numbers[count] = (long *)malloc(sizeof(long) * 2);
		if (!a.numbers[count])
		{
			ft_free(a, argc);
			free(a.numbers);
			break ;
		}
		a.numbers[count][0] = ft_atoi_plus(argv[i]);
		count--;
		i++;
	}
	return (a);
}

t_stack	ft_array_plus(int argc)
{
	t_stack b;

	b.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!b.numbers)
		ft_free(b, argc);
	b.numbers[0] = 0;
	return (b);
}
