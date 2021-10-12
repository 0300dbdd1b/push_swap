/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:57:23 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/03 22:55:00 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char	*next;

	if (!str)
	{
		if (!next)
			return (NULL);
		str = next;
	}
	while (*str && ft_strchr(delim, *str))
		str++;
	if (!*str)
		return (NULL);
	next = ft_strpbrk(str, delim);
	if (next)
	{
		*next = '\0';
		next++;
	}
	return (str);
}
