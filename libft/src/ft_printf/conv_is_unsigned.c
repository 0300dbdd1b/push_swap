/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_is_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:55:40 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 10:51:53 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	conv_is_unsigned(t_conv *conv)
{
	return (
		conv->spec == SPEC_UDEC
		|| conv->spec == SPEC_UHEX
		|| conv->spec == SPEC_PTR);
}
