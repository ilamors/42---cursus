/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:53:10 by lmorsli           #+#    #+#             */
/*   Updated: 2023/01/07 16:48:26 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**first;
	t_list	*item;

	if (!lst || !del)
		return ;
	first = lst;
	while (*lst)
	{
		item = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = item;
	}
	*first = NULL;
}
