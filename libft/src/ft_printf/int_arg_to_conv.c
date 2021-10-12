/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_arg_to_conv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:48:04 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/23 11:14:55 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	int_arg_to_conv(va_list *args, t_conv *conv)
{
	int_arg_to_conv_var(args, conv);
	if (conv->spec == SPEC_SDEC && (intmax_t)conv->var.i < 0)
	{
		conv->negative = true;
		conv->var.i = -(intmax_t)conv->var.i;
	}
	if (conv->precision == 0 && conv->var.i == 0)
		conv->str = ft_strdup("");
	else
		conv->str = ft_uimaxtobase(conv->var.i, get_conv_base(conv));
}
