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

int	main(int argc, char **argv)
{
	int			count;
	int			i;
	t_values	pt1;

	i = 1;
	count = 0;
	ft_checks_args(argc, argv);
	pt1 = ft_array_generator(argc, i, count, argv);
	i = 0;
	while (i < (argc - 1))
	{
		printf("Valor de pt1.numbers[%d][0]: %d\n", i, pt1.numbers[i][0]);
		if (pt1.numbers[i][0] < INT_MIN || pt1.numbers[i][0] > INT_MAX)
		{	
			ft_printf("\n\tError: You are trespassing ints limits.");
			return (0);
		}
		i++;
	}
	count = 0;
	ft_printf("Valor de count: %d\t, Valor de argc: %d\n", count, argc);
	while (count < (argc -1)) 
	{
		ft_printf("test para ver si han pasado pt1.numbers[%d][0]: %d\n", count, pt1.numbers[count][0]);
		count++;
	}
	return (0);
}

int	ft_free(t_values pt1, int count)
{
	while (count >= 0)
	{
		free(pt1.numbers[count]);
		count--;
	}
	free(pt1.numbers);
	return (0);
}
