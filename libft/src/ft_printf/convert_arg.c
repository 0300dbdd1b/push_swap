/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:53:55 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 20:31:44 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	convert_arg(t_conv *conv, va_list *args)
{
	arg_to_conv(args, conv);
	if (!conv->str)
		return ;
	apply_precision_padding(conv);
	apply_zero_padding(conv);
	apply_prefix(conv);
	apply_sign(conv);
	apply_space_padding(conv);
	apply_uppercase(conv);
}
