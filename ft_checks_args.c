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

void	ft_checks_args(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	if (argc <= 1)
		exit (0);
	while (argv[a])
	{
		b = 0;
		while (argv[a][b])
		{
			if ((argv[a][b] == '-' && (argv[a][b + 1] >= '0'
				&& argv[a][b + 1] <= '9'))
				|| (argv[a][b] >= '0' && argv[a][b] <= '9'))
				b++;
			else
			{
				ft_printf("\n\tError: the characters passed are not integers\n");
				exit (-1);
			}
		}
		a++;
	}
}
