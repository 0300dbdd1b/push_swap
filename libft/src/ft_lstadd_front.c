/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 10:17:37 by trcottam          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:26 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *item)
{
	if (!lst || !item)
		return ;
	if (!*lst)
	{
		*lst = item;
		return ;
	}
	if (item->prev)
	{
		ft_lstadd_back(lst, item);
		*lst = (*lst)->prev;
		return ;
	}
	(*lst)->prev = item;
	item->next = *lst;
	*lst = item;
}
