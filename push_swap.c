/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/10 19:47:27 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int main(int argc, char **argv)
{
	t_values  pt1;
	t_values  lenght;

	if (argc <= 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	lenght.lenght = argc - 1;
	ft_printf("\nNumero de argumentos pasados: %d\n", lenght.lenght);

//	checkarguments(*argv);
	int	i;
	int count;

	count = 0;
	i = 1;

	pt1.numbers = (int **)malloc(sizeof(argc));
	if (!pt1.numbers)
		return (0);
	pt1.numbers[argc] = NULL;
	while (count < argc)
	{
		pt1.numbers[count] = (int *)malloc(sizeof(int) * 2);
		count++;
	}
	if (!pt1.numbers)
		return (0);
	count = 1;
	while (count < argc)
	{
		pt1.numbers[0][count] = ft_atoi(argv[count]);
		ft_printf("\nesto es argv: %d\n", pt1.numbers[0][count]);
		count++;
	}
	ft_printf("\nest es el x: %d", pt1.numbers[0][1]);
	ft_printf("\nEste es argv en la segunda posicion: %d", pt1.numbers[0][3]);
	return (0);
}

//void  checkarguments(char *argv)
