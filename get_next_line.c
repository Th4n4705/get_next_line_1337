/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 00:49:36 by twakrim           #+#    #+#             */
/*   Updated: 2018/12/02 03:08:00 by twakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int			temoin;
	char		buff[BUFF_SIZE + 1];
	static char	*linebuff[256];
	int			i;

	if (fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (linebuff[fd] == NULL)
		linebuff[fd] = ft_strdup("");
	while ((temoin = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[temoin] = '\0';
		linebuff[fd] = ft_strjoin(linebuff[fd], buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	i = 0;
	while (linebuff[fd][i] != '\n' && linebuff[fd][i] != '\0')
		i++;
	*line = ft_strsub(linebuff[fd], 0, i);
	if (!(ft_strlen(linebuff[fd])) && temoin == 0)
		return (0);
	linebuff[fd] = ft_strdup(linebuff[fd] + i + 1);
	return (1);
}
