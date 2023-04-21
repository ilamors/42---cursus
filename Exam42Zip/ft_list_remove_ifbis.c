#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
    {
        return; // if the list is empty, nothing to remove
    }

    t_list *current = *begin_list; // pointer to the current node
    t_list *previous = NULL; // pointer to the previous node

    while (current != NULL)
    {
        // Compare the data of the current node with the reference data
        if (cmp(current->data, data_ref) == 0)
        {
            // If the data matches, update the next pointer of the previous node
            // to bypass the current node
            if (previous != NULL)
            {
                previous->next = current->next;
            }
            else
            {
                // If previous is NULL, it means the current node is the first node
                // Update the begin_list pointer to skip the current node
                *begin_list = current->next;
            }

            // Free the memory occupied by the current node
            free(current);

            // Move to the next node
            if (previous != NULL)
            {
                current = previous->next;
            }
            else
            {
                current = *begin_list;
            }
        }
        else
        {
            // If the data doesn't match, move to the next node
            previous = current;
            current = current->next;
        }
    }
}

#include <stdio.h>
#include <string.h>

void	print_list(t_list **begin_list)
{
t_list *cur = *begin_list;
	while (cur != 0)
	{
		printf("%p\n", cur->data);
		cur = cur->next;
	}
}

int		main(void)
{
 	char straa[] = "String aa";
 	t_list *aa = malloc(sizeof(t_list));
 	aa->next = 0;
 	aa->data = straa;
 	char strbb[] = "String bb";
 	t_list *bb = malloc(sizeof(t_list));
 	bb->next = 0;
 	bb->data = strbb;
 	char strcc[] = "String cc";
 	t_list *cc = malloc(sizeof(t_list));
 	cc->next = 0;
 	cc->data = strcc;
 	char strdd[] = "String dd";
 	t_list *dd = malloc(sizeof(t_list));
 	dd->next = 0;
 	dd->data = strdd;
 	aa->next = bb;
 	bb->next = cc;
	cc->next = dd;

 	t_list **begin_list = &aa;
 	print_list(begin_list);
 	printf("----------\n");
 	ft_list_remove_if(begin_list, straa, strcmp);
 	print_list(begin_list);
}

