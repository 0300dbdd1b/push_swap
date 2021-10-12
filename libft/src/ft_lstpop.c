/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:51:26 by trcottam          #+#    #+#             */
/*   Updated: 2021/09/16 12:28:50 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpop(t_list **lst)
{
	t_list	*item;

	if (!lst || !*lst)
		return (NULL);
	ft_lstlast(*lst)->next = (*lst)->next;
	item = *lst;
	*lst = (*lst)->next;
	if ((*lst)->prev)
	{
		(*lst)->prev = (*lst)->prev->prev;
		item->prev = item;
		item->next = item;
	}
	else
		item->next = NULL;
	if (*lst == item)
		*lst = NULL;
	return (item);
}
