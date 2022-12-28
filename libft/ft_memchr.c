/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:04:44 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/17 22:43:52 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int     main()
{
	char	*s;
//	s = ft_memchr("finalement", 'l', 10);
	s = memchr("finalement", 'l', 10);
	printf(" %s\n",(s));
	return(0);
}*/
