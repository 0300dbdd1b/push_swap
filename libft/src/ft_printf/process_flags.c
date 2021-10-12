/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 05:01:18 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 22:13:08 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	process_flags(char **format, t_conv *conv)
{
	while (true)
	{
		if (**format == '#')
			conv->alt = true;
		else if (**format == '0')
			conv->zero = true;
		else if (**format == '-')
			conv->left = true;
		else if (**format == ' ')
			conv->space = true;
		else if (**format == '+')
			conv->sign = true;
		else
			break ;
		(*format)++;
	}
}
