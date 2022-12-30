/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:20:23 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:33:21 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	i = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (us1[i] == us2[i] && us1[i] && us2[i] && i < n - 1)
		i++;
	return (us1[i] - us2[i]);
}
/*
int	main()
{
	char a[] = "Hello";
	char b[] = "printer";
\\	printf("%s\n", ft_strncmp(a, b, 3));
	printf("%s\n", strncmp(a, b, 3));
}*/
