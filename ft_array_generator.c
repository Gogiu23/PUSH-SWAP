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

t_values	ft_array_generator(int argc, int i, int count, char **argv)
{
	t_values	pt1;

	pt1.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!pt1.numbers)
		ft_free(pt1, argc);
	pt1.numbers[argc - 1] = 0;
	while (count >= 0)
	{
		pt1.numbers[count] = (long *)malloc(sizeof(long) * 2);
		if (!pt1.numbers[count])
		{
			ft_free(pt1, argc);
			free(pt1.numbers);
			break ;
		}
		pt1.numbers[count][0] = ft_atoi_plus(argv[i]);
		count--;
		i++;
	}
	return (pt1);
}
