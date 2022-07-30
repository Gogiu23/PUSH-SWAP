/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:27:09 by gdominic          #+#    #+#             */
/*   Updated: 2022/07/16 17:10:23 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char *s1, char *set)
{
	unsigned int	i;

	i = 0;
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[i]) != 0 && i)
		i--;
	return (ft_substr((char *)s1, 0, i + 1));
}
