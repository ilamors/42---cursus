/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:38:31 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/17 22:43:15 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len_needed;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_needed = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * len_needed + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	printf("%s", ft_strjoin(av[1], av[2]));
}*/
