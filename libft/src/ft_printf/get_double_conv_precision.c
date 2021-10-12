/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_double_conv_precision.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:01:38 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 22:01:45 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_double_conv_precision(t_conv *conv)
{
	if (conv->precision < 0)
		return (6);
	if (conv->spec == SPEC_DAUTO && conv->precision == 0)
		return (1);
	return (conv->precision);
}
