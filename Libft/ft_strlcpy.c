/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:20:01 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/17 22:45:40 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;

	slen = ft_strlen(src);
	if (!dst || !src)
		return (slen);
	if (size == 0)
		return (slen);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}
/*
int	main()
{
	char dst[] = "This is a test";
	char src[] = "This is a test";
	printf("%ld", ft_strlcpy(dst, src, 11));
	printf("%ld", strlcpy(dst, src, 11));
	return 0;
}*/
