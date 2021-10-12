/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_double_dec_sep.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:08:00 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 10:29:10 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	append_double_dec_sep(t_conv *conv, t_double *ds)
{
	if (
		conv->alt
		|| ((conv->spec == SPEC_DDEC || conv->spec == SPEC_DSCI)
			&& conv->precision)
		|| (conv->spec == SPEC_DAUTO && ds->parts.d))
		return (ft_strappend(&conv->str, "."));
	return (true);
}
