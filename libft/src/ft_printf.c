/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:26:45 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 16:11:37 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	char	*format_copy;
	va_list	args;
	int		len;

	format_copy = ft_strdup(format);
	va_start(args, format);
	len = process_format(format_copy, &args);
	va_end(args);
	free(format_copy);
	return (len);
}
