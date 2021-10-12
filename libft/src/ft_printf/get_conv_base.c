/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_conv_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:49:33 by trcottam          #+#    #+#             */
/*   Updated: 2020/11/29 21:32:25 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	get_conv_base(t_conv *conv)
{
	if (conv->spec == SPEC_SDEC || conv->spec == SPEC_UDEC)
		return (10);
	else if (conv->spec == SPEC_UHEX || conv->spec == SPEC_PTR)
		return (16);
	return (0);
}
