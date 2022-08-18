/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:26:17 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/19 00:27:15 by gdominic         ###   ########.fr       */
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
	return (result);
}
	//1 while espacios avanzo ++
	//2 if signo, cojo signo avanzo 1
	//3 mientras este entre '0' i '9' sumo a resultado (linea magica)
	//4 devuelo resultado * signo
	//result = (result * 10) + (str[i] - '0');
