/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_double_parts.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:02:26 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 22:02:35 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_double_parts	get_double_parts(double d, int dec_part_len)
{
	t_double_parts	parts;
	int				i;
	uintmax_t		multiplier;

	i = 0;
	multiplier = 1;
	while (i < dec_part_len)
	{
		multiplier *= 10;
		i++;
	}
	parts.i = d;
	parts.d = (d - parts.i) * multiplier + 0.5;
	if (!dec_part_len && d - parts.i == 0.5 && parts.i % 2 == 0)
		parts.i--;
	if (parts.d == multiplier)
	{
		if (d - parts.i != .5 || parts.i % 2 == 1)
			parts.i++;
		parts.d = 0;
	}
	return (parts);
}
