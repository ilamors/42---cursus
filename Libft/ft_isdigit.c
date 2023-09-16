/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:28:44 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:02:00 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main()
{
	char a[] = "23476821";
	char b[] = "!*$)@$ahdfs";
//	printf("%d\n", ft_isdigit(a));
//	printf("%d\n", ft_isdigit(b));
	printf("%d\n", isdigit(*a));
	printf("%d\n", isdigit(*b));
	return 0;
}*/
