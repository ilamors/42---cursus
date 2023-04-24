#include <stdlib.h>

char	*ft_itoa(int nb)
{
	int	i;
	long	n;
	char	*str;

	i = 0;
	n = nb;
	if (!(str = malloc(sizeof(char) * i + 1)))
		return(NULL);
	str[i] = '\0';
	if (nb == -2147483648)
		return("-2147483648");
	if (nb < 0)
	{
		i += 1;
		nb *= -1;
		str[0] = '-';
	}
	if (nb == 0)
	{
		str[0] = '0';
		return(str);
	}
	while(n)
	{
		n /= 10;
		i +- 1;
	}
	while(nb)
	{
		str[--i] = nb % 10 + '0';
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

