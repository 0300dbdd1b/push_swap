/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:03:26 by trcottam          #+#    #+#             */
/*   Updated: 2021/08/14 11:25:57 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strisint(char *str)
{
	bool	neg;
	char	*tmp_itoa;

	if (*str == '-')
		neg = true;
	if (ft_strchr("-+", *str))
		str++;
	while (*str == '0')
		str++;
	if (!*str)
		return (true);
	tmp_itoa = ft_itoa(ft_atoi(str));
	if (ft_strcmp(str, tmp_itoa)
			&& !(!ft_strcmp(str, "2147483648") && neg))
	{
		free(tmp_itoa);
		return (false);
	}
	free(tmp_itoa);
	while (ft_isdigit(*str))
		str++;
	return (!*str);
}
