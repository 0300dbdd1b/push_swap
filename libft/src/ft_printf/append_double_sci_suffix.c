/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_double_sci_suffix.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:10:57 by trcottam          #+#    #+#             */
/*   Updated: 2021/08/09 00:31:54 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	append_double_sci_suffix(t_conv *conv, t_double *ds)
{
	char	*sign;
	char	*power_str;

	if (!ds->sci)
		return (true);
	if (ds->exp >= 0)
		sign = "+";
	else
		sign = "-";
	if (!(
			ft_strappend(&conv->str, "e")
			&& ft_strappend(&conv->str, sign)))
		return (false);
	power_str = ft_itoa(ft_abs(ds->exp));
	if (!(
			power_str
			&& ft_strpad(&power_str, '0', 2, 0)
			&& ft_strappend(&conv->str, power_str)))
		return (false);
	free(power_str);
	return (true);
}
