/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:48:27 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:03:03 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (1);
	return (0);
}
/*
int	main()
{
	char a[] = "wuyofuiawh";
	char b[] = "234354";
	char c[] = "@(#^&$#(%@#";
	printf("%d\n", ft_isalnum(*a));
	printf("%d\n", ft_isalnum(*b));
	printf("%d\n", ft_isalnum(*c));
	printf("%d\n", isalnum(*a));
        printf("%d\n", isalnum(*b));
        printf("%d\n", isalnum(*c));
}*/
