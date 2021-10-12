/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 10:58:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:47 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *item)
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
		item->prev = (*lst)->prev;
		item->next = (*lst);
		(*lst)->prev->next = item;
		(*lst)->prev = item;
		return ;
	}
	if (!(*lst)->next)
		item->prev = *lst;
	ft_lstadd_back(&((*lst)->next), item);
}
