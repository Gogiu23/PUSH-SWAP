/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_args_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:52:31 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/21 08:51:13 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"


void	ft_checks_args_bonus(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	if (argc <= 1)
		exit (0);
	while (argv[a])
	{
		b = 0;
		if ((argv[a][b] == '-' && (argv[a][b + 1] >= '0'
			&& argv[a][b + 1] <= '9'))
			|| (argv[a][b] >= '0' && argv[a][b] <= '9'))
		{
			while (argv[a][b] >= '0' && argv[a][b] <= '9')
				b++;
		}
		else
			ft_error_bonus("Error\n");
		a++;
	}
	ft_checks_duplicates_bonus(argv);
}

void	ft_checks_duplicates_bonus(char **argv)
{
	int		previous;
	int		forward;

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
				ft_error_bonus("Error\n");
		}
		previous++;
	}
	ft_aissorted_bonus(argv);
}

void	ft_aissorted_bonus(char **argv)
{
	int	present;
	int	count;

	present = 1;
	count = 0;
	while (argv[present + 1])
	{
		if (ft_atoi(argv[present]) > ft_atoi(argv[present + 1]))
			count++;
		present++;
	}
	if (count == 0)
		exit (EXIT_SUCCESS);
}

int	ft_stack_is_sorted_bonus(t_stack *a)
{
	int	count;

	count = 0;
	while (count < a->lenght - 1)
	{
		if (a->numbers[count + 1][0] > a->numbers[count][0])
			count++;
		else
			return (0);
	}
	return (1);
}
