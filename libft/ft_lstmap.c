/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:54:19 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 17:02:09 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*elem;
	t_list	*temp;

	temp = lst;
	newlist = NULL;
	while (temp != NULL)
	{
		elem = ft_lstnew((*f)(temp->content));
		if (!elem)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, elem);
		temp = temp->next;
	}
	return (newlist);
}
