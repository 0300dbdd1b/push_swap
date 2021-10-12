/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:46:12 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 15:22:05 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	process_format(char *format, va_list *args)
{
	int	len;

	len = 0;
	while (*format)
	{
		len += print_ordinary_str(&format);
		if (*format)
			len += print_conv(&format, args, len);
	}
	return (len);
}
