/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_arg_to_conv.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:32:14 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 11:51:25 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	char_arg_to_conv(va_list *args, t_conv *conv)
{
	conv->var.c = va_arg(*args, int);
	conv->str = ft_chartostr(conv->var.c);
}
