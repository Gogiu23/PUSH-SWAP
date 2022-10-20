/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_commands_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:07:15 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/20 21:25:35 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_check_commands(char *command, t_stack *a, t_stack *b)
{
	if (ft_strncmp(command, "sa\n", 3) == 0)
		ft_sa_bonus(a);
	if (ft_strncmp(command, "sb\n", 3) == 0)
		ft_sb_bonus(*b);
	if (ft_strncmp(command, "ra\n", 3) == 0)
		ft_ra_bonus(a);
	if (ft_strncmp(command, "rb\n", 3) == 0)
		ft_rb_bonus(b);
	if (ft_strncmp(command, "rr\n", 3) == 0)
		ft_rr_bonus(a, b);
	if (strncmp(command, "rra\n", 4) == 0)
		ft_rra_bonus(a);
	if (strncmp(command, "rrb\b", 4) == 0)
		ft_rrb_bonus(b);
	if (strncmp(command, "rrr\n", 4) == 0)
		ft_rrr_bonus(a, b);
	if (strncmp(command, "pa\n", 3) == 0)
		ft_pa_bonus(a, b);
	if (strncmp(command, "pb\n", 3) == 0)
		ft_pb_bonus(a, b);
}
/*
void	ft_check_stacks_bonus(t_stack *a, t_stack *b)
{

}*/
