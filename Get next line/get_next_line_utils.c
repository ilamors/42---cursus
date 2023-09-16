/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:14:15 by lmorsli           #+#    #+#             */
/*   Updated: 2023/01/23 16:24:01 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_slen(const char *store)
{
	size_t	i;

	i = 0;
	if (!store)
		return (0);
	while (store[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *store, int c)
{
	int	i;

	i = 0;
	if (!store)
		return (NULL);
	if (c == '\0')
		return ((char *)&store[ft_slen(store)]);
	while (store[i] != '\0')
	{
		if (store[i] == (char)c)
			return ((char *)&store[i]);
		i++;
	}
	return (NULL);
}

char	*ft_sjoin(char *store, char *buff)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (!store)
	{
		store = malloc(sizeof(char) * 1);
		if (!store)
			return (NULL);
		store[0] = '\0';
	}
	if (!buff)
		return (NULL);
	dest = malloc(sizeof(char) * ((ft_slen(store) + ft_slen(buff)) + 1));
	if (!dest)
		return (NULL);
	while (store[++i] != '\0')
			dest[i] = store[i];
	while (buff[j] != '\0')
		dest[i++] = buff[j++];
	dest[ft_slen(store) + ft_slen(buff)] = '\0';
	free(store);
	return (dest);
}

void	str_cpy(char *line, char *store)
{
	int	i;

	i = 0;
	while (store[i] && store[i] != '\n')
	{
		line[i] = store[i];
		i++;
	}
	if (store[i] == '\n')
	{
		line[i] = store[i];
		i++;
	}
	line[i] = '\0';
}

size_t	ft_line_len(char *line)
{
	size_t	i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	return (i);
}
