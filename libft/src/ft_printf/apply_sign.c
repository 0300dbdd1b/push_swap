/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:57:37 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 22:27:11 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	apply_sign(t_conv *conv)
{
	char	*sign;

	if (conv->negative)
		sign = "-";
	else if (conv->sign)
		sign = "+";
	else if (conv->space)
		sign = " ";
	else
		return ;
	ft_strprepend(&conv->str, sign);
}
