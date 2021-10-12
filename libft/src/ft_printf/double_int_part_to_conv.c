/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_int_part_to_conv.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:06:52 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 22:07:09 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	double_int_part_to_conv(t_conv *conv, t_double *ds)
{
	return (conv->str = ft_uimaxtobase(ds->parts.i, 10));
}
