/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 02:44:17 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 16:31:43 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	process_width(char **format, va_list *args, t_conv *conv)
{
	if (**format == '*')
	{
		conv->width = va_arg(*args, int);
		if (conv->width < 0)
		{
			conv->left = true;
			conv->width *= -1;
		}
		(*format)++;
	}
	else
	{
		conv->width = ft_atoi(*format);
		while (ft_isdigit(**format))
			(*format)++;
	}
}
