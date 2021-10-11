/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:39:46 by naddino           #+#    #+#             */
/*   Updated: 2021/09/29 15:39:46 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	ra(t_stacks stacks)
{
	t_stack	*buf;
	t_stack	*buf2;

	if (!stacks.a || !stacks.a->next)
		return (stacks);
	buf = stacks.a;
	buf2 = buf;
	stacks.a = stacks.a->next;
	while (buf2->next)
		buf2 = buf2->next;
	buf2->next = buf;
	buf->next = NULL;
	return (stacks);
}

t_stacks	rb(t_stacks stacks)
{
	t_stack	*buf;
	t_stack	*buf2;

	if (!stacks.b || !stacks.b->next)
		return (stacks);
	buf = stacks.b;
	buf2 = buf;
	stacks.b = stacks.b->next;
	while (buf2->next)
		buf2 = buf2->next;
	buf2->next = buf;
	buf->next = NULL;
	return (stacks);
}

t_stacks	rr(t_stacks stacks)
{
	stacks = ra(stacks);
	stacks = rb(stacks);
	return (stacks);
}