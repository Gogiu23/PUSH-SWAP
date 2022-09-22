/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_generator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/22 20:50:23 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

t_stack	ft_array_generator(int argc, int i, int count, char **argv)
{
	t_stack	a;

	a.lenght = 0;
	a.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!a.numbers)
		ft_free(a, argc);
	a.numbers[argc - 1] = 0;
	while (count <= (argc - 2))
	{
		a.numbers[count] = (long *)malloc(sizeof(long) * 2);
		if (!a.numbers[count])
		{
			ft_free(a, argc);
			free(a.numbers);
			break ;
		}
		a.numbers[count][0] = ft_atoi_plus(argv[i]);
		a.lenght++;
		count++;
		i++;
	}
	ft_printf("lenght longitud: %d\n", a.lenght);
	ft_assign_alias(a);
	return (a);
}

t_stack	ft_array_plus(int argc)
{
	t_stack	b;
	int		count;

	b.lenght = 0;
	count = 0;
	b.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!b.numbers)
		ft_free(b, argc);
	b.numbers[argc - 1] = 0;
	while (count <= (argc - 2))
	{
		b.numbers[count] = (long *)malloc(sizeof(long) * 2);
		if (!b.numbers[count])
		{
			ft_free(b, argc);
			free(b.numbers);
			break ;
		}
		count++;
	}
	return (b);
}

t_stack	ft_assign_alias(t_stack a)
{
	int	rows;
	int	columns;
	int	index;
	int	counter;
//	int	count;
//	int	count2;

	rows = 0;
	columns = 1;
	ft_printf("Valor de a->lenght asignando alias: %d\n", a.lenght);
//	count = 0;
//	count2 = 1;
//	while (count < (a.lenght))
//	{
//		ft_printf("valor despues de ser ordenado = a.numbers[%d][%d]: %d\t%d\n", count, count2, a.numbers[count][0], a.numbers[count][1]);
//		count++;
//	}
	while (rows < a.lenght)
	{
		counter = 0;
		index = 0;
		while (counter < a.lenght)
		{
			if (a.numbers[rows][0] > a.numbers[counter][0])
				index++;
			counter++;
		}
		a.numbers[rows][columns] = index;
		rows++;
	}
//	count = 0;
//	count2 = 1;
//	while (count < a.lenght)
//	{
//		ft_printf("el segundo valor despues de ser ordenado = a.numbers[%d][%d]: %d\t%d\n", count, count2, a.numbers[count][0], a.numbers[count][1]);
//		count++;
//	}
	return (a);
}
