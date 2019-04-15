/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/06 16:20:14 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/03/01 17:44:46 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include "libft/libft.h"

# define BUFF_SIZE 8
# define FILE_DESC content_size

int	get_next_line(const int fd, char **line);

#endif
