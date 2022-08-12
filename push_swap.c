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
	int count;
	int	i;

	i = 1;
	count = 0;
	ft_printf("El valor de argc antes del malloc grande: %d\n", argc);
	pt1.numbers = (int **)malloc(sizeof(int *) * argc);
	if (!pt1.numbers)
		return (0);
	pt1.numbers[argc] = 0;
	ft_printf("Il valore di pt1.numbers[%d]\n", argc);
	while (count < lenght.lenght)
	{
		ft_printf("valor de count: %d\t Valor de argc: %d\n", count, argc);
		pt1.numbers[count] = (int *)malloc(sizeof(int) * 2);
		if (!pt1.numbers[count])
		{
			free (pt1.numbers);
			return (0);
		}
		pt1.numbers[count][0] = ft_atoi(argv[i]);
		pt1.numbers[count][2] = 0;
		ft_printf("\nesto es argv[%d]: %d\n", count, pt1.numbers[count][0]);
		count++;
		i++;
	}
	ft_printf("aqui a ver si me da error\n");
	ft_printf("El valor de count: %d\n", count);
//	pt1.numbers[count][0] = '\0';
	ft_printf("\neste es el elemento de la fila 2 en la primera columna: %d", pt1.numbers[1][0]);
	ft_printf("\nEste es argv en la primera posicion: %d", pt1.numbers[0][0]);
	return (0);
}

//void  checkarguments(char *argv
