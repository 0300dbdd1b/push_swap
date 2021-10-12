/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_is_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:55:40 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 21:39:05 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	conv_is_int(t_conv *conv)
{
	return (conv->spec == SPEC_SDEC || conv_is_unsigned(conv));
}
