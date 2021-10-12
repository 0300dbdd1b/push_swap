/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_prefix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 21:18:27 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/09 15:40:28 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	apply_prefix(t_conv *conv)
{
	if (!get_prefix_len(conv->str, conv))
		return ;
	ft_strprepend(&conv->str, HEX_PREFIX);
}
