/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:27:52 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/19 00:33:39 by gdominic         ###   ########.fr       */
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
				ft_error("Error\n");
			}
		}
		a++;
	}
	ft_checks_duplicates(argv);
}

void	ft_checks_duplicates(char **argv)
{
	int	previous;
	int	forward;

	previous = 1;
	forward = 1;
	while (argv[previous])
	{
		forward = previous + 1;
		while (argv[forward])
		{
			if (ft_strcmp(argv[previous], argv[forward]) != 0)
				forward++;
			else
				ft_error("Error\n");
		}
		previous++;
	}
}
