/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:51:33 by lmorsli           #+#    #+#             */
/*   Updated: 2023/01/27 04:06:09 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 150000
# endif

char	*get_next_line(int fd);
void	str_cpy(char *line, char *store);
char	*ft_strchr(const char *s, int c);
char	*ft_sjoin(char *store, char *buff);
size_t	ft_slen(const char *s);
size_t	ft_line_len(char *line);

#endif
