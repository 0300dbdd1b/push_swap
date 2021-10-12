/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:48:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/08/25 21:10:05 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*item;

	if (!lst || !f)
		return ;
	if (lst->prev)
		lst->prev->next = NULL;
	item = lst;
	while (item)
	{
		(*f)(item->data);
		item = item->next;
	}
	if (lst->prev)
		lst->prev->next = lst;
}
