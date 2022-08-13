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
#include <errno.h>

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
	pt1.numbers[argc] = 0;
	while (count < lenght.lenght)
	{
		pt1.numbers[count] = (int *)malloc(sizeof(int) * 3);
		if (!pt1.numbers[count])
		{
			ft_free(pt1, count);
			return (0);
		}
		pt1.numbers[count][0] = ft_atoi(argv[i]);
		pt1.numbers[count][2] = 0;
		count++;
		i++;
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
