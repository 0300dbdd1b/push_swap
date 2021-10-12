/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:34:30 by trcottam          #+#    #+#             */
/*   Updated: 2021/09/13 16:36:58 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*item;
	t_list	*next_item;

	if (!lst || !*lst || !del)
		return ;
	if ((*lst)->prev)
		(*lst)->prev->next = NULL;
	item = *lst;
	while (item)
	{
		next_item = item->next;
		ft_lstdelone(item, del);
		item = next_item;
	}
	*lst = NULL;
}
