/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:26:14 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/01 13:35:09 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

int	main(int argc, char **argv)
{
	int			count;
	int			i;
	t_stack		a;
	t_stack		b;
	char		*command;

	command = 0;
	i = 1;
	count = 0;
	ft_checks_args_bonus(argc, argv);
	a = ft_array_generator_bonus(argc, i, count, argv);
	b = ft_array_plus_bonus(argc);
	command = get_next_line(0);
	while (command != 0)
	{
		ft_check_commands(command, &a, &b);
		free(command);
		command = get_next_line(0);
	}
	ft_checks_stacks_bonus(&a, &b);
	command = NULL;
	exit(0);
}	
