/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 10:50:42 by trcottam          #+#    #+#             */
/*   Updated: 2021/09/13 16:48:03 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*item;

	if (!lst)
		return (0);
	if (lst->prev)
		lst->prev->next = NULL;
	i = 0;
	item = lst;
	while (item)
	{
		i++;
		item = item->next;
	}
	if (lst->prev)
		lst->prev->next = lst;
	return (i);
}
