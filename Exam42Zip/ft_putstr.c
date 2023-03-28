#include <unistd.h>

char	*ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(str);
}

int	main()
{
	char str[] = "le petit chien";
	ft_putstr(str);
	return(0);
}
