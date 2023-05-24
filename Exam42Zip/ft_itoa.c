#include <stdlib.h>
int	negative_value(int y)
{
	if (y < 0)
		return(-y);
	return(y);
}

int	get_len(int nb)
{
	if (nb <= 0)
		++i;
	while (nb)
	{
		++i;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int	i;
	long	n;
	char	*str;

	n = nb;
	i = get_len(n);
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return(NULL);
	str[i] = '\0';
	if (nb < 0)
		str[0] = '-';
	if (nb == 0)
		str[0] = '0';
	while(n)
	{
		str[--i] = negative_value(nb % 10) + '0';
		nb /= 10;
	}
	return(str);		
}

#include <stdio.h>
int     main()
{
        printf("%s\n", ft_itoa(33));
        printf("%s\n", ft_itoa(-33));
        printf("%s\n", ft_itoa(12345));
        printf("%s\n", ft_itoa(-12345));
        printf("%s\n", ft_itoa(98765));
        printf("%s\n", ft_itoa(-98765));
        printf("%s\n", ft_itoa(45));
        printf("%s\n", ft_itoa(-45));
        printf("%s\n", ft_itoa(-2147483648));
        printf("%s\n", ft_itoa(2147483647));
        printf("%s\n", ft_itoa(0));
        return (0);
}

