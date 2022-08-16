/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/11 01:33:21 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

t_values	ft_array_generator(int argc, int i, int count, char **argv)
{
	t_values	lenght;
	t_values	pt1;

	lenght.lenght = argc -1;
	pt1.numbers = (long **)malloc(sizeof(t_values *) * argc);
	if (!pt1.numbers)
		ft_free(pt1, count);
	pt1.numbers[argc - 1] = 0;
	while (count < lenght.lenght)
	{
		pt1.numbers[count] = (long *)malloc(sizeof(t_values) * 2);
		if (!pt1.numbers[count])
		{
			ft_free(pt1, count);
			free(pt1.numbers);
			break ;
		}
		pt1.numbers[count][0] = ft_atoi_plus(argv[i]);
		pt1.numbers[count][2] = 0;
		count++;
		i++;
	}
	return (pt1);
}
