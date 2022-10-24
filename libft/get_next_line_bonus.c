/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:35:52 by gdominic          #+#    #+#             */
/*   Updated: 2022/10/24 13:54:04 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_newptr(char *ptr)
{
	char	*upg_ptr;
	int		count;

	count = 0;
	while (ptr[count] && ptr[count] != '\n')
		count++;
	if (!ptr[count])
	{
		free(ptr);
		return (NULL);
	}
	upg_ptr = ft_substr(ptr, count + 1, ft2_strlen(ptr));
	return (upg_ptr);
}

char	*ft_getlines(char *ptr)
{
	char	*line;
	int		n;

	n = 0;
	if (!ptr[n])
		return (NULL);
	while (ptr[n] && ptr[n] != '\n')
		n++;
	line = (char *)malloc(n * sizeof(char) + 2);
	if (!line)
		return (NULL);
	n = 0;
	while (ptr[n] && ptr[n] != '\n')
	{
		line[n] = ptr[n];
		n++;
	}
	if (ptr[n] == '\n')
	{
		line[n] = '\n';
		n++;
	}
	line[n] = '\0';
	return (line);
}

char	*ft_read_line(char *ptr, int fd)
{
	char	*buffer;
	int		nbytes;

	nbytes = 1;
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(ptr, '\n') && nbytes != 0)
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		if (nbytes == -1)
		{
			free(buffer);
			free(ptr);
			return (NULL);
		}
		buffer[nbytes] = '\0';
		ptr = ft_strjoin(ptr, buffer);
	}
	free(buffer);
	return (ptr);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*ptr[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	ptr[fd] = ft_read_line(ptr[fd], fd);
	if (!ptr[fd])
		return (NULL);
	line = ft_getlines(ptr[fd]);
	ptr[fd] = ft_newptr(ptr[fd]);
	return (line);
}
