/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:38:32 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:16:05 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*voidtochar;
	size_t				i;

	voidtochar = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		voidtochar[i] = 0;
		i++;
	}
}
/*
int	main()
{
	unsigned char s[] = "abcd";
	ft_bzero(s, 1);
//	bzero(s, 1);
	printf("%s", (s));
	return(0);
	}*/
