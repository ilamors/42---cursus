/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:37:28 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/17 19:27:13 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!big || !little) && (!len))
		return (NULL);
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0'
			&& big[i + j] != '\0'
			&& i + j < len
			&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char *a = "je ne suis pas";
	char *b= "ne";
	printf(" %s\n", ft_strnstr(a, b, 14));
	printf(" %s\n", strnstr(a, b, 14));
	return(0);
}*/
