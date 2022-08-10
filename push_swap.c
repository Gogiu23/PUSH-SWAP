/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/10 02:18:34 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int main(int argc, char **argv)
{
	t_values  *pt1;
	t_values  lenght;

	if (argc <= 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	lenght.lenght = argc;
	ft_printf("\nNumero de argumentos pasados: %d\n", argc);

//	checkarguments(*argv);
	int	i;
	int	j;

	j = 1;
	i = 1;
	pt1 = 0;

	pt1->numbers = malloc(sizeof(char) * argc);
	if (!pt1->numbers)
		return (0);
	while (argv[i] != NULL)
	{
		pt1->numbers[j][i] = ft_atoi(argv[i]);
		i++;
		j++;
	}
//	ft_printf("Esto es argv: %c\n", pt.x);
	ft_printf("\nest es el x: %c", pt1->numbers[1]);
	ft_printf("\n%c", pt1->numbers[3]);
	return (0);
}

//void  checkarguments(char *argv)
