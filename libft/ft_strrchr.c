/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:28:35 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:30:21 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
int	main(int ac, char **av)
{
	int tofind = 'f';
	if (ac == 2)
	{
		printf("ma foction  : %s",ft_strrchr(av[1],tofind));
		printf("%s","\n");
		printf("l'originale : %s",strrchr(av[1],tofind));
	}
}*/
