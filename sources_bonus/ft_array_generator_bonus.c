/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_generator_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:54:26 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/18 12:20:08 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

t_stack	ft_array_generator_bonus(int argc, int i, int count, char **argv)
{
	t_stack	a;

	a.lenght = 0;
	a.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!a.numbers)
		ft_free_bonus(a, argc);
	a.numbers[argc - 1] = 0;
	while (count <= (argc - 2))
	{
		a.numbers[count] = (long *)malloc(sizeof(long) * 2);
		if (!a.numbers[count])
		{
			ft_free_bonus(a, argc);
			free(a.numbers);
			break ;
		}
		a.numbers[count][0] = ft_atoi_plus(argv[i]);
		a.lenght++;
		count++;
		i++;
	}
	ft_assign_alias_a_bonus(&a);
	return (a);
}

t_stack	ft_array_plus_bonus(int argc)
{
	t_stack	b;
	int		count;

	b.lenght = 0;
	count = 0;
	b.numbers = (long **)malloc(sizeof(long *) * argc);
	if (!b.numbers)
		ft_free_bonus(b, argc);
	b.numbers[argc - 1] = 0;
	while (count <= (argc - 2))
	{
		b.numbers[count] = (long *)malloc(sizeof(long) * 2);
		if (!b.numbers[count])
		{
			ft_free_bonus(b, argc);
			free(b.numbers);
			break ;
		}
		count++;
	}
	return (b);
}

t_stack	ft_assign_alias_a_bonus(t_stack *a)
{
	int	rows;
	int	index;
	int	counter;

	rows = 0;
	while (rows < a->lenght)
	{
		counter = 0;
		index = 0;
		while (counter < a->lenght)
		{
			if (a->numbers[rows][0] > a->numbers[counter][0])
				index++;
			counter++;
		}
		a->numbers[rows][1] = index;
		rows++;
	}
	return (*a);
}

t_stack	ft_assign_alias_b_bonus(t_stack *b)
{
	int	rows;
	int	index;
	int	counter;

	rows = 0;
	while (rows < b->lenght)
	{
		counter = 0;
		index = 0;
		while (counter < b->lenght)
		{
			if (b->numbers[rows][0] > b->numbers[counter][0])
				index++;
			counter++;
		}
		b->numbers[rows][1] = index;
		rows++;
	}
	return (*b);
}
