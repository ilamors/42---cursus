#include <unistd.h>

int	check_double(char *str, char c, int y)
{
	int	i;

	i = 0;
	while(i < y)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int	ft_inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while(str2[j])
		{
			if(str1[i] == str2[j])
			{
				if(check_double(str1, str1[i], i) == 1)
					write(1, &str1[i], 1);	
				break;
			}
			j++;
		}
		i++;
	}
	return(0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}
