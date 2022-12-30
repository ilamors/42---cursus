/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:31:15 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/17 22:44:39 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{	
		dest[i] = s[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}
/*
int        main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strdup(av[1]));
		printf("%s", "\n");
		printf("%s\n", strdup(av[1]));
	}
	return (0);
}*/
