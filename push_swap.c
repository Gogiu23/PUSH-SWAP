/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/17 17:21:21 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			count2;
	int			count;
	int			i;
	t_stack		a;
	t_stack		b;

	i = 1;
	count = 0;
	ft_checks_args(argc, argv);
	a = ft_array_generator(argc, i, count, argv);
	b = ft_array_plus(argc);
	ft_checks_ints(a, argc);
	count = 0;
	count2 = 1;
	while (count < (argc - 1))
	{
		ft_printf("valor antes de ser ordenado = a.numbers[%d][%d]: %d\t%d\n", count, count2, a.numbers[count][0], a.numbers[count][count2]);
		count++;
	}
	ft_printf("==========================================================\n");
	ft_printf("argc is: %d\n", argc);
	if (argc == 3)
		ft_sort_two(a, argc);
	if (argc == 4)
		ft_sort_three(a, argc);
	ft_printf("count: %d\n", count);
	ft_printf("==========================================================\n");
	if (argc == 6)
		ft_sort_five(a, b, argc);
	ft_printf("==========================================================\n");
	count = 0;
	count2 = 0;
	while (count < (argc - 1))
	{
		ft_printf("valor despues de ser ordenado = b.sstack[%d]: %d\n", count, b.sstack[count]);
//		count2++;
		count++;
	}
	ft_printf("==========================================================\n");
	count = 0;
	count2 = 1;
	while (count < (argc - 1))
	{
		ft_printf("valor despues de ser ordenado = a.numbers[%d][%d]: %d\t%d\n", count, count2, a.numbers[count][0], a.numbers[count][count2]);
		count++;
	}
	ft_printf("==========================================================\n");
	return (0);
}
