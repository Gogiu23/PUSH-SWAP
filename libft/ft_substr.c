/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:52:38 by gdominic          #+#    #+#             */
/*   Updated: 2022/07/16 06:16:42 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, unsigned int len)
{
	unsigned int		i;
	unsigned int		j;
	char				*str;

	i = 0;
	j = 0;
	if (!s)
	{
		free(s);
		return (NULL);
	}
	str = (char *)malloc(sizeof(*s) * (len));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	free(s);
	return (str);
}
