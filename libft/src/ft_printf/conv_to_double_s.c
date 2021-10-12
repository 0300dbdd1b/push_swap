/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_to_double_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:05:33 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 10:53:32 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_double	conv_to_double_s(t_conv *conv)
{
	t_double	ds;

	init_double_s(&ds);
	ds.dec_part_len = conv->precision;
	if (conv->spec == SPEC_DAUTO)
		ds.dec_part_len -= 1;
	if (conv->spec == SPEC_DSCI || conv->spec == SPEC_DAUTO)
		get_sci_double_s(conv->var.d, &ds);
	ds.sci = (
			conv->spec == SPEC_DSCI
			|| (conv->spec == SPEC_DAUTO
				&& (ds.exp < -4 || ds.exp >= conv->precision)));
	if (!ds.sci)
	{
		if (conv->spec == SPEC_DAUTO)
			ds.dec_part_len -= ds.exp;
		ds.parts = get_double_parts(conv->var.d, ds.dec_part_len);
	}
	return (ds);
}
