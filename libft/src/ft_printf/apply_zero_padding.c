/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_zero_padding.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:10:58 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 10:23:29 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	apply_zero_padding(t_conv *conv)
{
	size_t	len;

	if (!conv->zero
		|| conv->left
		|| (conv_is_int(conv) && conv->precision >= 0)
		|| conv->width <= (int)get_prefix_len(conv->str, conv))
		return ;
	len = conv->width - conv_has_sign(conv) - get_prefix_len(conv->str, conv);
	ft_strpad(&conv->str, '0', len, 0);
}
