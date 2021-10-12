/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_arg_to_conv_var.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 20:32:31 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 14:55:22 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	signed_int_arg_to_conv_var(va_list *args, t_conv *conv)
{
	if (conv->len == LEN_CHAR)
		conv->var.i = (char)va_arg(*args, int);
	else if (conv->len == LEN_SHORT)
		conv->var.i = (short)va_arg(*args, int);
	else if (conv->len == LEN_LONG)
		conv->var.i = va_arg(*args, long int);
	else if (conv->len == LEN_LLONG)
		conv->var.i = va_arg(*args, long long int);
	else
		conv->var.i = va_arg(*args, int);
}

void	unsigned_int_arg_to_conv_var(va_list *args, t_conv *conv)
{
	if (conv->len == LEN_CHAR)
		conv->var.i = (unsigned char)va_arg(*args, unsigned int);
	else if (conv->len == LEN_SHORT)
		conv->var.i = (unsigned short)va_arg(*args, unsigned int);
	else if (conv->spec == SPEC_PTR)
		conv->var.i = (uintptr_t)va_arg(*args, void *);
	else if (conv->len == LEN_LONG)
		conv->var.i = va_arg(*args, unsigned long int);
	else if (conv->len == LEN_LLONG)
		conv->var.i = va_arg(*args, unsigned long long int);
	else
		conv->var.i = va_arg(*args, unsigned int);
}

void	int_arg_to_conv_var(va_list *args, t_conv *conv)
{
	if (conv->spec == SPEC_SDEC)
		signed_int_arg_to_conv_var(args, conv);
	else
		unsigned_int_arg_to_conv_var(args, conv);
}
