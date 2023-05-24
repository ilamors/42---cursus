#include <unistd.h>

int	get_len(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return(i);
}

char    *rev_print(char  *str)
{
	char	*s = str;
	int	i = get_len(s) - 1;
	while ( i >= 0)
	{
		write (1, &s[i], 1);
		i--;
	}
	return(str);
}

int	main()
{
	char *s = "laila";
	rev_print(s);
}
