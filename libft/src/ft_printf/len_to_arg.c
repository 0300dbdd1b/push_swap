/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_to_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 22:00:33 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/16 22:22:58 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	len_to_arg(int written_len, va_list *args, t_conv *conv)
{
	void	*p;

	p = va_arg(*args, void *);
	if (conv->len == LEN_CHAR)
		*(signed char *)p = written_len;
	else if (conv->len == LEN_SHORT)
		*(short *)p = written_len;
	else if (conv->len == LEN_LONG)
		*(long *)p = written_len;
	else if (conv->len == LEN_LLONG)
		*(long long *)p = written_len;
	else
		*(int *)p = written_len;
}
