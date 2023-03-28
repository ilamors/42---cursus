#include <stdlib.h>
int	ft_abs(int y)
{
	if (y < 0)
		return(-y);
	return(y);
}

int	*ft_range(int start, int end)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * ft_abs(end - start) + 1);
	if(!tab)
		return(0);
	while (start < end)
		tab[i++] = start++;
	tab[i] = start;
	while (start > end)
		tab[i++] = end++;
	tab[i] = end;
	return(tab);
}
#include <stdio.h>
int	main()
{
	int	i = 0;
	int	*tab = ft_range(-3, 4);
	while (i < 8)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
