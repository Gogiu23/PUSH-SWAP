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

void ft_init_stack_a(t_stack *a, int argc, char **argv)
{
		int lenght;
		int count;

		lenght = argc;
		count = 0;
		a->array = malloc(sizeof(t_piece *) * lenght);
		a->array[lenght] = NULL;
		if (!a->array){
			//ft_free(pt1, count);
		}
		while (0 < lenght--)
		{
			a->array[count] = malloc(sizeof(t_piece) * 1);
			if (!a->array[count]){
				
			}
			a->array[count]->number = ft_atoi(argv[lenght]);
			count++;
		}
		a->lenght = count - 1;
}

void ft_init_stack_b(t_stack *b, int argc)
{
		b->array = malloc(sizeof(t_piece *) * (argc));
		b->array[argc] = NULL;
		b->array[0] = NULL;
		b->lenght = 0;
}

int	main(int argc, char **argv)
{
	int			count;
	int			i;

	t_stack a;
	t_stack b;

	i = 1;
	count = 0;
	if(!ft_checks_args(argc, argv))
	{
		return (1);
	}

	ft_init_stack_a(&a, argc, argv);
	ft_init_stack_b(&b, argc);

	(void)b;
	printf("Somos muy guais y el lenght the stack a es: %d\n", a.lenght);
	printf("Somos muy guais y mi stack tiene debajod de todo:\n");
	printf("%d\n", a.array[0]->number);
	printf("Somos muy guais y mi stack tiene arriba de todo:\n");
	printf("%d\n", a.array[a.lenght - 1]->number);

	printf("Somos muy guais y el lenght the stack b es: %d\n", b.lenght);
	//pt1 = ft_array_generator(argc, i, count, argv);
	//pt1 = ft_array_generator(argc, i, count, argv);
	// i = 0;
	// while (i < (argc - 1))
	// {
	// 	printf("Valor de pt1.numbers[%d][0]: %d\n", i, pt1.numbers[i][0]);
	// 	if (pt1.numbers[i][0] < (INT_MIN) || pt1.numbers[i][0] > (INT_MAX))
	// 	{	
	// 		ft_printf("\n\tError: You are trespassing ints limits.");
	// 		return (0);
	// 	}
	// 	i++;
	// }
	// count = 0;
	// ft_printf("Valor de count: %d\t, Valor de argc: %d\n", count, argc);
	// while (count < (argc -1))
	// {
	// 	ft_printf("test para ver si ha pasado pt1.numbers[%d][0]: %d\n", count, pt1.numbers[count][0]);
	// 	count++;
	// }
	return (0);
}

// int	ft_free(t_values pt1, int count)
// {
// 	while (count >= 0)
// 	{
// 		free(pt1.numbers[count]);
// 		count--;
// 	}
// 	free(pt1.numbers);
// 	return (0);
// }
