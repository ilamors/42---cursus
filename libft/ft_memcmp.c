/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:04:09 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:37:43 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i])
	i++;
	return (str1[i] - str2[i]);
}
/*
int	main()
{
        char a[] = "heplo";
        char b[] = "hello";
        printf(" %d\n", ft_memcmp(a, b, 5));
	printf(" %d\n", memcmp(a, b, 5));
}*/
