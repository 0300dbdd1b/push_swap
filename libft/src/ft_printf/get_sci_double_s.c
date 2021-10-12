/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sci_double_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:04:57 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 22:05:02 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	get_sci_double_s(double d, t_double *ds)
{
	if (d == 0)
		return ;
	while (d < 1)
	{
		d *= 10;
		ds->exp--;
	}
	while (d >= 10)
	{
		d /= 10;
		ds->exp++;
	}
	ds->parts = get_double_parts(d, ds->dec_part_len);
	if (ds->parts.i == 10)
	{
		ds->parts.i = 1;
		ds->parts.d = 0;
		ds->exp++;
	}
}
