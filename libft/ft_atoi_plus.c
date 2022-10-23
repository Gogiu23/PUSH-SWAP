/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:26:17 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/24 00:02:23 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

long	ft_atoi_plus(const char *str)
{
	int		i;
	long	r;
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
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= r;
	ft_check_arg_atoi(result, str, i);
	return (result);
}
	//1 while espacios avanzo ++
	//2 if signo, cojo signo avanzo 1
	//3 mientras este entre '0' i '9' sumo a resultado (linea magica)
	//4 devuelo resultado * signo
	//result = (result * 10) + (str[i] - '0');

void	ft_check_arg_atoi(long result, const char *str, int i)
{
	if (result > INT_MAX || result < INT_MIN)
	{
		ft_putstr_error("Error\n");
		exit(0);
	}
	if (ft_strlen(str) == i)
		return ;
	else
	{
		ft_putstr_error("Error\n");
		exit(0);
	}
}
