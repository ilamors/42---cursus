/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:49:48 by lmorsli           #+#    #+#             */
/*   Updated: 2023/01/07 16:38:04 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_chr(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	right;
	size_t	left;
	char	*cpy;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	left = 0;
	while (s1[left] && ft_chr(s1[left], set))
	left++;
	right = ft_strlen(s1);
	while ((right > left) && (ft_chr(s1[right - 1], set)))
		right--;
	if (right < left)
		right = left;
	cpy = (char *)malloc(sizeof(char) * (right - left + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (left < right)
		cpy[i++] = s1[left++];
	cpy[i] = '\0';
	return (cpy);
}
/*
int	main(void)
{
	char const	*str = "lisonrefuselepasli";
	char const	*st = "li";
	printf("%s\n", ft_strtrim(str, st));
	return (0);
}*/
