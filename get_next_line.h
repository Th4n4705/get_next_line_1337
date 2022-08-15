/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 00:49:42 by twakrim           #+#    #+#             */
/*   Updated: 2018/12/02 02:23:34 by twakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# define BUFF_SIZE 12

# include "libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
