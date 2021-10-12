/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 05:03:14 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 16:13:15 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	process_precision(char **format, va_list *args, t_conv *conv)
{
	if (**format != '.')
		return ;
	(*format)++;
	if (**format == '*')
	{
		conv->precision = va_arg(*args, int);
		(*format)++;
	}
	else
	{
		conv->precision = ft_atoi(*format);
		while (ft_isdigit(**format))
			(*format)++;
	}
	if (conv->precision < 0)
		conv->precision = -1;
}
