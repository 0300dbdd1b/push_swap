/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_is_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 00:24:21 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 10:31:06 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	conv_is_double(t_conv *conv)
{
	return (
		conv->spec == SPEC_DSCI
		|| conv->spec == SPEC_DDEC
		|| conv->spec == SPEC_DAUTO);
}
