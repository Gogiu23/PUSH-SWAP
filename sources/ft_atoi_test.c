/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:16:38 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/15 11:50:54 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		r;
	long	result;

	result = 0;
	r = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			r = -1;
		i++;
	}
	while (str[i++] >= '0' && str[i++] <= '9')
		result = (result * 10) + (str[i] - '0');
	result *= r;
	return (result);
}
