/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_commands_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:07:15 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/19 15:54:44 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

void	ft_check_commands(char *command, t_stack *a, t_stack *b)
{
	b = 0;
	if (ft_strncmp(command, "sa\n", 3) == 0)
		ft_sa_bonus(a);
	if (ft_strncmp(command, "ra\n", 3) == 0)
		ft_ra_bonus(a);
}

void	ft_check_stacks_bonus(t_stack *a, t_stack *b)
{

}
