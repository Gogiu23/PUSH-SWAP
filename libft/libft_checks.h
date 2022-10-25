/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_checks.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:15:59 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/21 21:29:59 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_CHECKS_H
# define LIBFT_CHECKS_H

# include "libft.h"

/****************CUSTOM FUNCTIONS INCLUDED**************/

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *s);
void	ft_check_arg_atoi(const char *str, int i);

#endif
