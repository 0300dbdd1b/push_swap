/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_double_dec_part.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:09:53 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 10:26:56 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	append_double_dec_part(t_conv *conv, t_double *ds)
{
	char	*dec_str;

	if (!(
			ds->parts.d
			|| (ds->dec_part_len && (conv->spec != SPEC_DAUTO || conv->alt))))
		return (true);
	if (conv->spec == SPEC_DAUTO && !conv->alt && ds->parts.d)
	{
		while (ds->parts.d % 10 == 0)
		{
			ds->dec_part_len--;
			ds->parts.d /= 10;
		}
	}
	dec_str = ft_uimaxtobase(ds->parts.d, 10);
	if (!(
			dec_str
			&& ft_strpad(&dec_str, '0', ds->dec_part_len, 0)
			&& ft_strappend(&conv->str, dec_str)))
		return (false);
	free(dec_str);
	return (true);
}
