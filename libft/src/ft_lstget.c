/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:48:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/09/15 15:10:54 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstget(t_list *lst, int i)
{
	t_list	*item;

	item = lst;
	while (i < 0 && item)
	{
		item = item->prev;
		i++;
	}
	while (i > 0 && item)
	{
		item = item->next;
		i--;
	}
	return (item);
}
