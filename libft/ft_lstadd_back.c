/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:51:54 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/16 15:55:10 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
**	Ici, si la liste est vide, new sera le nouveau et le seul elem. de la liste. 
**	Puis on utilise la fonction ft_lstlast pour se placer sur le dernier elem.
**		de la liste.
**	Enfin, on fais en sorte que le dernier elem. pointe vers new.
*/
