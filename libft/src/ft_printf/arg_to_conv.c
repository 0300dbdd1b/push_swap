/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:20:23 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/24 14:20:03 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	arg_to_conv(va_list *args, t_conv *conv)
{
	if (conv_is_int(conv))
		int_arg_to_conv(args, conv);
	else if (conv_is_double(conv))
		double_arg_to_conv(args, conv);
	else if (conv->spec == SPEC_CHAR)
		char_arg_to_conv(args, conv);
	else if (conv->spec == SPEC_STR)
		str_arg_to_conv(args, conv);
	else if (conv->spec == SPEC_PERCENT)
		conv->str = ft_strdup("%");
}
