/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/20 21:33:44 by gdominic         ###   ########.fr       */
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
	count = (argc);
	ft_checks_args(argc, argv);
	pt1 = ft_array_generator(argc, i, count, argv);
	while (count > 0)
	{
		ft_printf("El pt1.numbers[%d][0]: %d\n", count, pt1.numbers[count][0]);
		count--;
	}
	ft_printf("hola\n");
	ft_checks_ints(pt1, argc);
	return (1);
}
