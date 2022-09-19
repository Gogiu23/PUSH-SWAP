/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 04:51:29 by gdominic          #+#    #+#             */
/*   Updated: 2022/09/19 13:46:17 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sort_two(t_stack a, int argc)
{
	int	count;

	count = 0;
	while (count < (argc -2))
	{
		if (a.numbers[count][0] < a.numbers[count + 1][0])
			exit (1);
		else
		{
			ft_sa(a);
		}
		count++;
	}
}

void	ft_sort_three(t_stack a, int argc)
{
	int	count;

	count = 0;
	if (a.numbers[count][1] == 1 && a.numbers[count + 2][1] == 2)
		ft_sa(a);
	if (a.numbers[count][1] == 2 && a.numbers[count + 2][1] == 1)
		ft_ra(&a, argc);
	if (a.numbers[count][1] == 2 && a.numbers[count + 2][1] == 0)
	{
		ft_ra(&a, argc);
		ft_sa(a);
	}
	if (a.numbers[count][1] == 1 && a.numbers[count + 2][1] == 0)
	{
		ft_ra(&a, argc);
		ft_ra(&a, argc);
	}
	if (a.numbers[count][1] == 0 && a.numbers[count + 2][1] == 1)
	{
		ft_ra(&a, argc);
		ft_ra(&a, argc);
		ft_sa(a);
	}
}

void	ft_sort_five(t_stack a, t_stack b, int argc)
{
	int	rows;
	int	columns;
	int	count;
	int	counter;

	counter = 0;
	count = 0;
	rows = 0;
	columns = 0;
//	ft_printf("Dentro del sort five 1\n");
	while(count <= 1)
	{
		rows = 0;
	//	ft_printf("Dentro del sort five 2\n");
		while(rows < (argc - 2))
		{
			ft_printf("\t\t\tAlias: %d\n", a.numbers[rows][1]);
			ft_printf("Valor de count dentro del sort five: %d\n", count);
			ft_printf("Dentro del sort five 3\n");
			ft_printf("Valor de b.numbers en el sort 5: %d\n", b.numbers[0]);
			ft_printf("==========================================================\n");
			if (a.numbers[rows][1] == count)
			{
				ft_printf("El valor de count es: %d\n", count);
				columns = rows;
				while (columns > 0)
				{
					ft_ra(&a, argc);
					columns--;
				}
				ft_printf("\t\tAlias dentro de if que iran a pb: %d\n", a.numbers[rows][1]);
				ft_pb(&a, &b, argc);
	//			ft_printf("error aqui?\n");
			}
			ft_printf("Valor de a.lenght cuando vuelve de pb: %d\n", a.lenght);
			rows++;
	//		count++;
		//	counter++;
	//		ft_printf("error 3 aqui?\n");
		}
	//	ft_printf("error 3.5 aqui?\n");
		count++;
	//	ft_printf("error 4 aqui?\n");
	}
	ft_printf("==============================================\n");
	ft_assign_alias(a, argc);
	ft_sort_three(a, argc);
	ft_printf("==============================================\n");
	ft_pa(&a, &b);
}


