/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:20:20 by lmorsli           #+#    #+#             */
/*   Updated: 2023/01/18 16:20:39 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_slen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *store, int new_line)
{
	int	i;

	i = 0;
	if (!store)
		return (NULL);
	if (new_line == '\0')
		return ((char *)&store[ft_slen(store)]);
	while (store[i] != '\0')
	{
		if (store[i] == (char)new_line)
			return ((char *)&store[i]);
		i++;
	}
	return (NULL);
}

/* si store est vide: malloc et ajoute \0 */
char	*ft_sjoin(char *store, char *buff)
{
	char	*dest;
	size_t	i_store;
	size_t	i_buff;

	i_store = -1;
	i_buff = 0;
	if (!store)
	{
		store = (char *)malloc(sizeof(char) * 1);
		store[0] = '\0';
	}
	if (!store || !buff)
		return (NULL);
	dest = (char *)malloc(((ft_slen(store)
					+ ft_slen(buff)) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (store)
		while (store[++i_store] != '\0')
			dest[i_store] = store[i_store];
	while (buff[i_buff] != '\0')
		dest[i_store++] = buff[i_buff++];
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

/*
calcul la taille de la ligne
*/
size_t	ft_line_len(char *line)
{
	size_t	len;

	len = 0;
	while (line[len] && line[len] != '\n')
		len++;
	return (len);
}
