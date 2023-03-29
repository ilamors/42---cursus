#include <stdlib.h>

int	count_word(char *str)
{
	int	count;

	count = 0;
	while(*str)
	{
		while(*str && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		if(*str && *str != ' ' && *str != '\t' && *str != '\n')
		{
			count++;
			while (*str && *str != ' ' && *str != '\t' && *str != '\n')
				str++;

		}
	}
	return(count);
}

char	*malloc_word(char *str)
{
	int	i;
	char	*tab;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
	tab = malloc(sizeof(char) * i + 1);
	if (!tab)
		return(NULL);
	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return(tab);
}

char	**ft_split(char *str)
{
	int	i;
	char	**dest;

	i = 0;
	dest = malloc(sizeof(char*) * count_word(str) + 1);
	if(!dest)
		return(NULL);
	while(*str)
	{
		while(*str && (*str == ' ' || *str == '\t' || *str == '\n'))
                        str++;
                if(*str && *str != ' ' && *str != '\t' && *str != '\n')
                {
			dest[i] = malloc_word(str);
			i++;
			while (*str && *str != ' ' && *str != '\t' && *str != '\n')
                                str++;
		}
	}
	dest[i] = '\0';
	return(dest);
}

#include <stdio.h>
int	main()
{
	int	i = 0;
	char	*s = "le petit chien aboie lorsque la caravane passe";
	char	**str = ft_split(s);
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}
