/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/26 02:07:21 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
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
	if (argc == 3)
		ft_sort_two(&a);
	ft_print_stack(&a, &b);
	if (argc == 4)
		ft_sort_three(&a);
	if (argc <= 6)
		ft_sort_till_five(&a, &b, i, argc);
	if (argc > 6 && argc <= 101)
		ft_sort_till_hundred(&a, &b);
	if (argc > 101 && argc <= 501)
		ft_sort_beyond_hundred(&a, &b);
//	if (a.lenght >= 0)
	ft_free_stacks_a(&a);
	if (b.lenght >= 1)
		ft_free_stacks_b(&b);
	ft_print_stack(&a, &b);
	exit (0);
}
