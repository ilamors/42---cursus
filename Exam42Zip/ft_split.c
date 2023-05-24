#include <stdlib.h>

int	len_word(char *str)
{
	int	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return(i);
}

char	*word_dupe(char *str)
{
	int	len = len_word(str);
	int	i = 0;
	char	*tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return(NULL);
	tab[len] = '\0';
	while (i < len)
	{
		tab[i] = str[i];
		++i;
	}
	return(tab);
}

void	fill_word(char **tab, char *str)
{
	int	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str)
	{
		tab[i] = word_dupe(str);
			++i;
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
}

int	count_word(char *str)
{
	int count = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str)
	{
		++count;
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
	return(count);
}

char	**ft_split(char *str)
{
	if (str == NULL)
		return(NULL);
	int	i = count_word(str);
	char	**tab = malloc(sizeof(char*) * (i + 1));
	if (!tab)
		return(NULL);
	tab[i] = '\0';
	fill_word(tab, str);
	return(tab);
}

#include <stdio.h>
int	main()
{
	int	i = 0;
	char	*s = "Ce clavier gestionnaire permet aux clients de personnaliser leur ordinateur sur un clavier niveau.";
	char	**str = ft_split(s);
	while (str[i])
	{
		printf("%s\n", str[i]);
			i++;
	}
}
