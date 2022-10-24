/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:36:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/24 16:17:52 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes_bonus/push_swap_bonus.h"

int	ft_free_bonus(t_stack *a)
{
	while (a->lenght >= 0)
	{
		free(a->numbers[a->lenght]);
		a->lenght--;
	}
	free(a->numbers);
	return (0);
}
