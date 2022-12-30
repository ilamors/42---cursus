/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:34:16 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 12:42:46 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nb;
	int	i;

	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] && str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10 + str[i]) - '0';
		i++;
	}
	return (nb * sign);
}
/*
#include <stdio.h>
int    main(void)
{
 	char str[12] = "    -587 +52-55 5yhf";
    printf("%d", ft_atoi(str));
    return (0);
}*/
