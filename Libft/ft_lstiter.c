/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:53:44 by lmorsli           #+#    #+#             */
/*   Updated: 2023/01/07 16:49:34 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		temp = lst->next;
		(*f)(lst->content);
		lst = temp;
	}
}
/*
int     main(void)
{
        t_list  *mylist;
        char    str[] = "Head";
        mylist = ft_lstnew((void *)str);

        t_list  *item1;
        t_list  *item2;
        t_list  *item3;
        t_list  *item4;

        item1 = ft_lstnew((void *)"one");
        ft_lstadd_back(&mylist, item1);
        item2 = ft_lstnew((void *)"two");
        ft_lstadd_back(&mylist, item2);
        item3 = ft_lstnew((void *)"three");
        ft_lstadd_back(&mylist, item3);
        item4 = ft_lstnew((void *)"four");
        ft_lstadd_back(&mylist, item4);

        int i;
        i = 0;     
        while (mylist)
        {
                printf("mon item[%d] => %s\n", i , (char *)mylist->content);
                mylist = mylist->next;
                i++;
        }
        ft_lstiter(mylist,f);
        return (0);
}
*/
