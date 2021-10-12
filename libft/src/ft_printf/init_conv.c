/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_conv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:43:02 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 15:39:38 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init_conv(t_conv *conv)
{
	conv->spec = 0;
	conv->str = NULL;
	conv->len = 0;
	conv->width = 0;
	conv->precision = -1;
	conv->negative = false;
	conv->uppercase = false;
	conv->alt = false;
	conv->zero = false;
	conv->left = false;
	conv->space = false;
	conv->sign = false;
	conv->null_char = false;
}
