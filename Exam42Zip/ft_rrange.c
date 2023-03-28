#include <stdlib.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		return(-nb);
	return(nb);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * ft_abs(end - start) + 1);
	if (!tab)
		return(0);
	while(start < end)
		tab[i++] = end--;
	tab[i] = end;
	while (start > end)
		tab[i++] = start--;
	tab[i] = start;
	return(tab);
}

#include <stdio.h>
int	main()
{
	int	i = 0;
	int	*tab = ft_rrange(-3, 4);
	while (i < 8)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
