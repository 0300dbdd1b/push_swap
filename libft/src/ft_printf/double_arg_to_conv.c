/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_arg_to_conv.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:55:55 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 10:24:08 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	double_arg_to_conv(va_list *args, t_conv *conv)
{
	t_double	ds;

	conv->var.d = va_arg(*args, double);
	if (1 / conv->var.d < 0)
	{
		conv->negative = true;
		conv->var.d *= -1;
	}
	conv->precision = get_double_conv_precision(conv);
	ds = conv_to_double_s(conv);
	if (!(double_int_part_to_conv(conv, &ds)
			&& append_double_dec_sep(conv, &ds)
			&& append_double_dec_part(conv, &ds)
			&& append_double_sci_suffix(conv, &ds)))
		return ;
}
