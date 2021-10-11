/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:39:49 by naddino           #+#    #+#             */
/*   Updated: 2021/09/29 15:39:49 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	pa(t_stacks stacks)
{
	t_stack	*buf;

	if (stacks.b)
	{
		buf = stacks.b;
		stacks.b = stacks.b->next;
		buf->next = stacks.a;
		stacks.a = buf;
	}
	return (stacks);
}

t_stacks	pb(t_stacks stacks)
{
	t_stack	*buf;

	if (stacks.a)
	{
		buf = stacks.a;
		stacks.a = stacks.a->next;
		buf->next = stacks.b;
		stacks.b = buf;
	}
	return (stacks);