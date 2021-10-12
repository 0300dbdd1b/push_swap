/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 00:07:15 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/09 15:41:55 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	apply_uppercase(t_conv *conv)
{
	char	*str_copy;

	if (!conv->uppercase)
		return ;
	str_copy = conv->str;
	while (*str_copy)
	{
		*str_copy = ft_toupper(*str_copy);
		str_copy++;
	}
}
