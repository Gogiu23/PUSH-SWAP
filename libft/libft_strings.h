/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_strings.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:20:56 by gdominic          #+#    #+#             */
/*   Updated: 2022/07/16 17:10:52 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_STRINGS_H
# define LIBFT_STRINGS_H

# include "libft.h"

char	*ft_substr(char *s, unsigned int start, unsigned int len);
char	*ft_strjoin(char *ptr, char *buffer);
char	**ft_split(char *s, char c);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char *s1, char *set);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *dst, const char *src, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strchr(char *ptr, int n);
size_t	ft2_strlen(char *str);

#endif 
