/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:29:16 by lmorsli           #+#    #+#             */
/*   Updated: 2022/11/25 21:25:23 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dst;
	size_t	i;

	i = nmemb * size;
	if (size != 0 && nmemb != i / size)
		return (NULL);
	dst = malloc(i);
	if (!dst)
		return (NULL);
	ft_bzero(dst, i);
	return ((void *)dst);
}
/*
int	main(void)
{
	size_t	i;
	size_t	j;

	i = 3;
	j = 2;
	printf(" %p", ft_calloc(i, j));
}*/
