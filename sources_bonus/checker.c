/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:26:14 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/24 08:57:28 by gdominic         ###   ########.fr       */
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
	ft_checks_ints_bonus(a, argc);
	command = get_next_line(0);
	while (command)
	{
		ft_check_commands(command, &a, &b);
		command = get_next_line(0);
	}
	ft_checks_stacks_bonus(&a, &b);
	free(command);
	command = NULL;
	ft_free_bonus(&a, argc);
	ft_free_bonus(&b, argc);
}	
