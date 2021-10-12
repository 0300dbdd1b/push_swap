/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 05:03:54 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 15:27:42 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	process_len(char **format, t_conv *conv)
{
	if (**format == 'h')
	{
		(*format)++;
		if (**format == 'h')
		{
			(*format)++;
			conv->len = LEN_CHAR;
			return ;
		}
		conv->len = LEN_SHORT;
	}
	else if (**format == 'l')
	{
		(*format)++;
		if (**format == 'l')
		{
			(*format)++;
			conv->len = LEN_LLONG;
			return ;
		}
		conv->len = LEN_LONG;
	}
}
