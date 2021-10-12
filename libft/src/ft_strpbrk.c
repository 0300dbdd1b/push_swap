/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:29:56 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/03 21:36:54 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpbrk(const char *s, const char *accept)
{
	char	*str;

	str = (char *)s;
	while (*str && !ft_strchr(accept, *str))
		str++;
	if (*str)
		return (str);
	return (NULL);
}
