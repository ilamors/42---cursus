/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:40:44 by lmorsli           #+#    #+#             */
/*   Updated: 2022/11/25 13:40:50 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_putnbr(int nb, char *dest)
{
	int		i;
	long	n;

	n = nb;
	i = get_int_len(n);
	dest[i--] = '\0';
	if (n == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		dest[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (dest);
}

char	*ft_itoa(int nb)
{
	char	*dest;
	int		i;
	long	n;

	n = nb;
	i = get_int_len(n);
	dest = malloc (sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	dest = ft_putnbr(nb, dest);
	return (dest);
}

// int	main(void)
// {
// 	printf("%s",ft_itoa(3535));
// }
