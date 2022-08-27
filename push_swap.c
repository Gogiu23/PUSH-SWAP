/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/27 05:03:16 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			count;
	int			i;
	t_stack		a;
	t_stack		b;

	i = 1;
	count = (argc - 2);
	ft_checks_args(argc, argv);
	a = ft_array_generator(argc, i, count, argv);
	b = ft_array_plus(argc);
	ft_checks_ints(a, argc);
	count = 0;
	while (count < (argc - 1))
	{
		ft_printf("valor antes de ser ordenado = a.numbers[%d][0]: %d\n", count, a.numbers[count][0]);
		count++;
	}
	ft_printf("argc is: %d\n", argc);
	if (argc == 3)
		ft_sort_two(a, argc);
	if (argc == 4)
		ft_sort_three(a, argc);
	ft_printf("count: %d\n", count);
	count = 0;
	while (count < (argc - 1))
	{
		ft_printf("Despues de ser sorteado = a.numbers[%d][0]: %d\n", count, a.numbers[count][0]);
		count++;
	}
	return (1);
}
