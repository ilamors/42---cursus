/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:21:59 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/17 19:24:49 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendest;
	size_t	lensrc;

	if ((!dst || !src) && size == 0)
		return (0);
	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendest)
		return (size + lensrc);
	i = lendest;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lendest + lensrc);
}
/*
int     main()
{
        char dst[] = "le petit bonhomme";
        char src[] = "l'hommme";
        printf("%ld", ft_strlcat(dst, src, 25));
	printf("%ld", strlcat(dst, src, 25));
        return 0;
}*/
