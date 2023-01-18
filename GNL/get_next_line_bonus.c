/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:18:56 by lmorsli           #+#    #+#             */
/*   Updated: 2023/01/18 16:20:48 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_line(char *store)
{
	int		i;
	char	*line;

	i = 0;
	if (!store[i])
		return (NULL);
	line = (char *)malloc(sizeof(char) * (ft_line_len(store) + 2));
	if (!line)
		return (NULL);
	str_cpy(line, store);
	return (line);
}

char	*read_and_join(int fd, char *store)
{
	char	*buff;
	int		idx;

	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	idx = 1;
	while (!ft_strchr(store, '\n') && idx != 0)
	{
		idx = read(fd, buff, BUFFER_SIZE);
		if (idx == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[idx] = '\0';
		store = ft_sjoin(store, buff);
	}
	free(buff);
	return (store);
}

char	*new_stash(char *store)
{
	int		i;
	int		i_newstash;
	char	*new_stash;

	i = 0;
	while (store[i] && store[i] != '\n')
		i++;
	if (!store[i])
	{
		free(store);
		return (NULL);
	}
	new_stash = (char *)malloc(sizeof(char) * (ft_slen(store) - i + 1));
	if (!new_stash)
		return (NULL);
	i++;
	i_newstash = 0;
	while (store[i])
		new_stash[i_newstash++] = store[i++];
	new_stash[i_newstash] = '\0';
	free(store);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*store[1024];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1023)
		return (NULL);
	store[fd] = read_and_join(fd, store);
	if (!store[fd])
		return (NULL);
	line = get_line(store[fd]);
	store[fd] = new_stash(store[fd]);
	return (line);
}
/*
#include "stdio.h"
#include "fcntl.h"
int main()
{
	int    fd;
	char *line;

	fd = open("testfile", O_RDONLY);
	line = "";
	while (line)
	{
		line = get_next_line(fd);
		printf(" %s", line);
		free(line);
	}
	return (0);
}*/
