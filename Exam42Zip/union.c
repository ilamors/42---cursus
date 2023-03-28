#include <unistd.h>

int	check_double1(char *str, char c, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int	check_double2(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if(check_double1(str1, str1[i], i) == 1)
			write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if(check_double2(str1, str2[i]) == 1)
			{
				if(check_double1(str2, str2[i], i) == 1)
					write(1, &str2[i], 1);
			}
		i++;
	}
	return(0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}
