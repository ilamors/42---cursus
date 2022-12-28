/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:01:44 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:00:55 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int     main()
{
	char c[] = "4387512";
	char b[] = "TKAWETLF";
	printf("%d\n", ft_isalpha(*c));
	printf("%d\n", ft_isalpha(*b));
	printf("%d\n", isalpha(*c));

	printf("%d\n", isalpha(*b));
}*/
