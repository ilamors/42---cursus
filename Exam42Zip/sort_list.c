#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void	swapped_value(t_list *a, t_list *b)
{
	int swap = a->data;
	a->data = b->data;
	b->data = swap;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	swapped = 1;
	t_list	*current = lst;

	while (swapped == 1)
	{
		swapped = 0;
		while (current && current->next)
		{
			if (cmp(current->data, current->next->data) == 0)
			{
				swapped_value(current, current->next);
				swapped = 1;
			}
			else
			{
				current = current->next;
			}
		}
		current = lst;
	}
	return(lst);
}

void	swap_values(t_list *a, t_list *b);
t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

int ascending(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list *c = malloc(sizeof(t_list));
	c->next = 0;
	c->data = 45;

	t_list *b = malloc(sizeof(t_list));
	b->next = c;
	b->data = 73;

	t_list *a = malloc(sizeof(t_list));
	a->next = b;
	a->data = 108;

	t_list *cur = a;
	while (cur)
	{
		printf("%d", cur->data);
		if (cur->next != 0)
			printf(", ");
		cur = cur->next;
	}
	printf("\n");

	cur = sort_list(a, ascending);

	// cur = a;
	while (cur)
	{
		printf("%d", cur->data);
		if (cur->next != 0)
			printf(", ");
		cur = cur->next;
	}
	printf("\n");
}
/*
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};*/
