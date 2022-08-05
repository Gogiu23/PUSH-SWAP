/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:58:45 by gdominic          #+#    #+#             */
/*   Updated: 2022/08/05 17:14:02 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	int	i;
	
	i = 1;
	while (argv[i] != 0)
		ft_printf("Esto es argv: %s\n", argv[i++]);
	return (0);
}
