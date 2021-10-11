/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:39:29 by naddino           #+#    #+#             */
/*   Updated: 2021/09/29 15:39:32 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	sa(t_stacks stacks)
{
	int	nb;

	if (!stacks.a)
		return (stacks);
	nb = stacks.a->nb;
	stacks.a->nb = stacks.a->next->nb;
	stacks.a->next->nb = nb;
	return (stacks);
}

t_stacks	sb(t_stacks stacks)
{
	int	nb;

	if (!stacks.b)
		return (stacks);
	nb = stacks.b->nb;
	stacks.b->nb = stacks.b->next->nb;
	stacks.b->next->nb = nb;
	return (stacks);
}

t_stacks	ss(t_stacks stacks)
{
	stacks = sa(stacks);
	stacks = sb(stacks);
	return (stacks);
}