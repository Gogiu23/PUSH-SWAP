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

t_values	ft_check_errors(t_values pt1, t_values lenght)
{
	int	i;

	i = 0;
	ft_printf("entramos al control de errores\n");
//	printf("el valor de pt1: %d, %d, %d\n", *pt1.numbers[0], *pt1.numbers[1], *pt1.numbers[2]);
	while (i < (int)lenght.lenght)
	{
		ft_printf("Valor de i: %d\n", i);
		ft_printf("Valor de pt1 dentro del while: %d\t\n", *pt1.numbers[i]);
		if (*pt1.numbers[i] < '9' || *pt1.numbers[i] > '0')
		{
			(write (1, "Error\n", 6));
			break;
		}
		if (*pt1.numbers[i] < INT_MIN && *pt1.numbers[i] > INT_MAX)
		{
			write (1, "Error\n", 6);
			break;
		}
		i++;
	}
	return (pt1);
}

int main(int argc, char **argv)
{
	t_values  pt1;
	t_values  lenght;
	int count;
	int	i;

	lenght.lenght = argc - 1;
	i = 1;
	count = 0;

	
	if (argc <= 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	pt1.numbers = (int **)malloc(sizeof(int *) * argc);
	if (!pt1.numbers)
		return (0);
	pt1.numbers[argc - 1] = 0;
	while (count < lenght.lenght)
	{
		pt1.numbers[count] = (int *)malloc(sizeof(int) * 3);
		if (!pt1.numbers[count])
		{
			ft_free(pt1, count);
			free(pt1.numbers);
			return (0);
		}
		pt1.numbers[count][0] = ft_atoi(argv[i]);
		pt1.numbers[count][2] = 0;
		count++;
		i++;
	}
	ft_printf("vamos al control de errores\n");
	ft_check_errors(pt1, lenght);
	ft_printf("Volvemos del control de errores\n");
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
