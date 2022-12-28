/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:41:59 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:17:12 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (!n && !src)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[] = "Hello";
	char	src[] = "print";
	ft_memcpy(dest, src, 2);	
//	memcpy(dest, src, 2);
	printf("%s", (dest));
	return(0);
}*/
