/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_precision_padding.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:14:53 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/09 15:40:00 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	apply_precision_padding(t_conv *conv)
{
	if (!conv_is_int(conv) || conv->precision <= 0)
		return ;
	ft_strpad(&conv->str, '0', conv->precision, 0);
}
