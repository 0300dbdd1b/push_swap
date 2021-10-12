/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:21:58 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 17:55:03 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	process_spec(char **format, t_conv *conv)
{
	conv->spec = **format;
	if (ft_isupper(conv->spec))
	{
		conv->uppercase = true;
		conv->spec += 0x20;
	}
	if (conv->spec == 'i')
		conv->spec = SPEC_SDEC;
	(*format)++;
}
