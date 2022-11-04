/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_commands_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:07:15 by gdominic          #+#    #+#             */
/*   Updated: 2022/11/04 00:58:48 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_check_commands(char *command, t_stack *a, t_stack *b)
{
	if (ft_strncmp(command, "sa\n", 3) == 0)
		ft_sa_bonus(a);
	else if (ft_strncmp(command, "sb\n", 3) == 0)
		ft_sb_bonus(b);
	else if (ft_strncmp(command, "ss\n", 3) == 0)
		ft_ss_bonus(a, b);
	else if (ft_strncmp(command, "ra\n", 3) == 0)
		ft_ra_bonus(a);
	else if (ft_strncmp(command, "rb\n", 3) == 0)
		ft_rb_bonus(b);
	else if (ft_strncmp(command, "rr\n", 3) == 0)
		ft_rr_bonus(a, b);
	else if (ft_strncmp(command, "rra\n", 4) == 0)
		ft_rra_bonus(a);
	else if (ft_strncmp(command, "rrb\n", 4) == 0)
		ft_rrb_bonus(b);
	else if (ft_strncmp(command, "rrr\n", 4) == 0)
		ft_rrr_bonus(a, b);
	else if (ft_strncmp(command, "pa\n", 3) == 0)
		ft_pa_bonus(a, b);
	else if (ft_strncmp(command, "pb\n", 3) == 0)
		ft_pb_bonus(a, b);
	else
		ft_error_bonus("Error\n");
}

void	ft_checks_stacks_bonus(t_stack *a, t_stack *b)
{
	if (ft_stack_is_sorted_bonus(a) == 1 && b->lenght == 0)
		ft_printf("OK\n");
	else
		ft_error_bonus("KO\n");
}
