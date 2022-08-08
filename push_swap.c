/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/08 22:09:01 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int main(int argc, char **argv)
{
	t_values  pt1;
	t_values  pt2;

	if (argc <= 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	int	i;

	i = 1;
	while (argv[i] != 0)
	{
		pt1.x = *(int *)argv[i];
		i++;
		ft_printf("Esto es argv: %c\n", pt.x);
	}
//	ft_printf("Esto es argv: %c\n", pt.x);
	ft_printf("\n%c", pt.x[2]);
	ft_printf("\n%c", pt.y[3]);
	return (0);
}
