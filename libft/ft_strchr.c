/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:06:04 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:28:24 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{	
		int tofind = 0;
		printf("tofind :%d\n", tofind);
		printf("mon strchr :%s", ft_strchr(av[1],tofind));
		printf("%s","%\n");
		printf("l'original :%s", strchr(av[1],tofind));
	}
	return (0);
}*/
