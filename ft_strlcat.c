/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:21:59 by lmorsli           #+#    #+#             */
/*   Updated: 2022/11/16 16:44:46 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*concatene src à dest et termine par '\0'. .
Si la size est plus petite ou egale a la longueur de *dest,
/on retourne la size + la longueur de *src;
/ On parcours tout *src jusqu'a size -1 : pourquoi -1, car on veut mettre un '\0'
/ Puis on copie dans *dest. retourne la longueur de la chaine concatenée.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] != '\0' && (len_dst + 1) < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst] = '\0';
	return (len_dst + len_src);
}
/*
int     main()
{
        char dst[] = "le petit bonhomme";
        char src[] = "l'hommme";
        printf("%ld", ft_strlcat(dst, src, 8));
	printf("%ld", strlcat(dst, src, 8));
        return 0;
}*/
