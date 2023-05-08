#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

char *ft_itoa(int nb)
{
	long int n;
	long int tmp_n;
	int		size;
	char	*result;

	size = 1;
	n = nb;
	tmp_n = nb;
	if (n < 0)
	{
		size++;
		tmp_n = n*-1;
		n = n*-1;
	}
	while (tmp_n > 9)
	{
		tmp_n = tmp_n / 10;
		size++;
	}
	result = malloc((size) + 1);
	if (!result)
		return (NULL);
	result[size] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	printf("size == %d\n", size);
	if (nb < 0)
		result[0] = '-';
	while (n > 0)
	{
		size = size - 1;
		result[size] = n % 10 + 48;
		n = n / 10;
	}
	return (result);
}

int main(int ac, char **av)
{
	int nb = atoi(av[1]);
	char *result = ft_itoa(nb);
	for (int i = 0; result[i]; i++)
		write(1, &result[i], 1);
	write(1, "\n", 1);	
	int i;

	i = 0;
	while (result[i])
	{
		write(1, &result[i], 1);
		i++;	
	}	
	write(1, "\n", 1);
	free(result);	
}
