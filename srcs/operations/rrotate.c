/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:39:42 by naddino           #+#    #+#             */
/*   Updated: 2021/09/29 15:39:43 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	rra(t_stacks stacks)
{
	t_stack	*buf;
	t_stack	*buf2;

	if (!stacks.a || !stacks.a->next)
		return (stacks);
	buf = stacks.a;
	while (buf->next->next)
		buf = buf->next;
	buf2 = buf->next;
	buf->next = NULL;
	buf2->next = stacks.a;
	stacks.a = buf2;
	return (stacks);
}

t_stacks	rrb(t_stacks stacks)
{
	t_stack	*buf;
	t_stack	*buf2;

	if (!stacks.b || !stacks.b->next)
		return (stacks);
	buf = stacks.b;
	while (buf->next->next)
		buf = buf->next;
	buf2 = buf->next;
	buf->next = NULL;
	buf2->next = stacks.b;
	stacks.b = buf2;
	return (stacks);
}

t_stacks	rrr(t_stacks stacks)
{
	stacks = rra(stacks);
	stacks = rrb(stacks);
	return (stacks);
}