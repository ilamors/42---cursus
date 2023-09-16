/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:39:58 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/29 18:40:26 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	cnt_wrd;

	i = 0;
	cnt_wrd = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			cnt_wrd++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (cnt_wrd);
}

static int	ft_size_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*ft_fill_tab(char const *s, char c)
{
	char	*dest;
	int		j;
	int		i;

	i = 0;
	j = 0;
	dest = malloc(ft_size_word(&s[i], c) + 1 * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] != c && s[i])
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

void	*ft_freetab(char **dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		free(dest[i]);
		i++;
	}
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		k;
	int		i;

	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	dest = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			dest[k++] = ft_fill_tab(&s[i], c);
			if (!dest)
				ft_freetab(dest);
			s += ft_size_word(&s[i], c);
		}
	}	
	dest[k] = NULL;
	return (dest);
}
/*
int	main(void)
{
	const char	*s;
	char		**str;
	int			i;

	s = "weoa aei owea oaog aogui";
	str = ft_split(s, ' ');
	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}*/
